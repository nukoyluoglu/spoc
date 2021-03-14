#include <bits/stdc++.h>

using namespace std;

const long long INF = (1ll << 62) - 1;
const long long M = 1e9 + 7;
long long modularExponentiation(long long x, long long y) 
	{ int res = 1;
	while (y > 0) 
		{ if (y & 1) res = (res * x) % M;
		y = y >> 1;
		x = (x * x) % M;
	}
	return res;
}
int main() 
	{ long long n;
	cin >> n;
	long long ans = modularExponentiation(2, n);
	ans = (ans + (ans * ans)) / 2;
	cout << ans % M << endl ;

}
