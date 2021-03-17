#include <bits/stdc++.h>

using namespace std;

long long m;
long long pw(long long x, long long p) 
	{ if (!p) return 1 % m;
	long long z = pw(x, p / 2);
	z *= z;
	z %= m;
	if (p % 2 == 0) return z;
	z *= x;
	z %= m;
	return z;
}
int main() 
	{ long long n;
	cin >> n >> m;
	long long res = 2 * (pw(3, n) - 1) / (2);
	res %= m;
	res += m;
	res %= m;
	cout << res << endl ;
	return 0;
}
