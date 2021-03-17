#include <bits/stdc++.h>

using namespace std;

long long power(long long x, long long y, long long MOD) 
	{ unsigned long long res = 1;
	x = x % MOD;
	while (y > 0) 
		{ if (y & 1) { res = (res * x) % MOD; }
		y = y >> 1;
		x = (x * x) % MOD;
	}
	return (long long)res;
}
long long n, m, res;
int main() 
	{ cin >> n >> m;
	res = power(3, n, m) - 1;
	cout << ( res + m ) % m << endl ;
	return 0;
}
