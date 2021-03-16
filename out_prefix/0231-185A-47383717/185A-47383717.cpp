#include <bits/stdc++.h>

using namespace std;

const long long mod = 1e9 + 7;
long long qpow2(long long p) 
	{ long long a = 2;
	long long res = 1;
	while (p) 
		{ if (p & 1) 
			{ res *= a;
			res %= mod;
		}
		a *= a;
		a %= mod;
		p >>= 1;
	}
	return res;
}
int main() 
	{ long long n;
	cin >> n;
	if (n == 0) 
		{ cout << 1 << endl;
	}  else 
		{ cout << ( qpow2 ( n - 1, 2 * n - i ) ) % mod << endl ;

	}
	return 0;
}
