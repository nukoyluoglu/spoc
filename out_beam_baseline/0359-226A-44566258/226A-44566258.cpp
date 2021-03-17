#include <bits/stdc++.h>

using namespace std;

int MOD;
long long mod_pow(long long a, long long b) 
	{ if (b == 0) return 1;
	if (b == 1) return a % MOD;
	if (b & 1) return ((a % MOD) * mod_pow(a, b - 1)) % MOD;
	long long x = mod_pow(a, b >> 1);
	return (x * x) % MOD;
}
int main() 
	{ int n, m;
	cin >> n >> m;
	MOD = m;
	int r = mod_pow(3, n);
	if (r == 0) 
		{ cout << m - 1 << endl;
	}  else 
		{ cout << r - 1 << endl ;
	}
	return 0;
}
