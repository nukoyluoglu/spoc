#include <bits/stdc++.h>

using namespace std;

long long power(long long x, int y, int m) 
	{ long long res = 1;
	while (y > 0) 
		{ if (y & 1) 
			{ res = res * x;
			res %= m;
		}
		y = y >> 1;
		x = x * x;
		x %= m;
	}
	return res;
}
int main() 
	{ int n, m;
	cin >> n >> m;
	int ans = power((long long)3, n, m);
	if (ans == 0) 
		{ cout << m - 1 << endl;
	}  else 
		{ cout << ans - 1 << endl ;
	}
	return 0;
}
