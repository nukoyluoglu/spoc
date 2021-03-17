#include <bits/stdc++.h>

using namespace std;

long long const mod = 1000000007;
long long powmod(long long a, long long b) 
	{ long long res = 1;
	a %= mod;
	assert(b >= 0);
	for (; b; b >>= 1) 
		{ if (b & 1) res = res * a % mod;
		a = a * a % mod;
	}
	return res;
}
ifstream in("txt.in");
ofstream out("txt.out");
int main() 
	{ cout << fixed << setprecision(12);
	long long a, b;
	cin >> a >> b;
	long long n;
	cin >> n;
	double mx = 2e9;
	for (int i = 1; i <= n; ++i) 
		{ long long x, y, k;
		cin >> x >> y >> k;
		double dis = sqrt((x - a) * (x - a) + (y - b) * (y - b)) / k;
		mx = min(mx, dis);
	}
	cout << mx << endl ;

	return 0;
}
