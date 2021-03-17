#include <bits/stdc++.h>

using namespace std;

long long power2(long long pow, long long mod) 
	{ long long res = 1ll, x = 2ll;
	while (pow > 0) 
		{ if (pow & 1) res = (res * x) % mod;
		pow >>= 1;
		x = (x * x) % mod;
	}
	return res;
}
int main() 
	{ long long n;
	cin >> n;
	if (n) 
		{ long long M = 1 * 1000 * 1000 * 1000 + 7;
		long long sol;
		sol = power2(2 * n - 1, M);
		sol += power2(n - 1, M);
		sol %= M;
		cout << sol << endl;
	}  else 
		{ cout << 1 << endl ;
	}
	return 0;
}
