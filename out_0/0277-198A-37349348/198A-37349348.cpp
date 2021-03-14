#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long k, b, n, t;
	cin >> k >> b >> n >> t;
	long long x = 1, cnt = -1;
	for (long long i = 1; i <= n; ++i) 
		{ x = k * x + b;
		if (x > t) 
			{ cnt = i - 1;
			break;
		}
	}
	if (cnt == -1)
		{ cout << 0 << endl;
	} else
		{ cout << n - cnt << endl ;

	} return 0;
}
