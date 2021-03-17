#include <bits/stdc++.h>

using namespace std;

long long MOD = 1e9 + 7;
long long mod = 1e9 + 7;
const int N = 100005;
long long inv[100005];
long long powmod(long long a, long long b) 
	{ long long res = 1;
	a %= mod;
	for (; b; b >>= 1) 
		{ if (b & 1) res = res * a % mod;
		a = a * a % mod;
	}
	return res;
}
int main() 
	{ long long n;
	cin >> n;
	inv[1] = 1;
	for (int i = 2; i < N; i++) { inv[i] = (MOD - MOD / i) * inv[MOD % i] % MOD; }
	long long d = powmod(2, n);
	long long ans = d * (d + 1) % mod * inv[2] % mod;
	cout << ans << endl ;
}
