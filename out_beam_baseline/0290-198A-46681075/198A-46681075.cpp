#include <bits/stdc++.h>

using namespace std;

long long solve(long long k, long long b, long long n, long long t) 
	{ if (k == 1) 
		{ long long low = -1, high = n;
		while (high - low > 1) 
			{ long long mid = (low + high) / 2;
			if (1 - t + b * (n - mid) <= 0) 
				{ high = mid;
			}  else 
				{ low = mid;
			}
		}
		return high;
	}
	long long answ = n;
	__float128 pow = 1;
	while (answ > 0 && (k - 1) * (pow * k - t) + b * (pow * k - 1) <= 0) 
		{ pow *= k;
		answ--;
	}
	return answ;
}
int main() 
	{ long long k, b, n, t;
	while ( cin >> k >> b >> n >> t ) { cout << solve ( k, b, n, t ) << endl ; }
	return 0;
}
