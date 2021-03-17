#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long u = 1;
	long long k, b, n, t;
	cin >> k >> b >> n >> t;
	if (k == 1) 
		{ long long x = 1;
		for (long long i = 1; i <= n; i++) x += b;
		long long r = t;
		long long ans = 0;
		while (r < x) 
			{ ans++;
			r += b;
		}
		cout << ans << endl;
		return 0;
	}
	long long r = 0;
	while (u * (k - 1 + b) <= (k * t - t + b)) 
		{ u *= k;
		r++;
	}
	cout << max ( n - r + 1, 0LL ) << endl ;
}
