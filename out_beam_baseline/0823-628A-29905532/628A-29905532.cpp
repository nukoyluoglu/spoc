#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e6 + 5;
const int mod = 1e9 + 7;
long long fac[maxn], y[maxn];
long long n, k;
long long qpow(long long a, long long b, long long c) 
	{ long long ans = 1;
	a %= c;
	b %= c;
	while (b > 0) 
		{ if (b % 2 == 1) ans = (ans * a) % c;
		b = b / 2;
		a = (a * a) % c;
	}
	return ans;
}
int pow_2(int m) 
	{ int res = 1;
	int left = 1;
	while (true) 
		{ if (res << left <= m && res << (left + 1) > m) return res << left;
		left++;
	}
}
int main() 
	{ int n, b, p;
	int ans = 0;
	cin >> n >> b >> p;
	int tow = n * p;
	int left = 0;
	while (n > 1) 
		{ int k = pow_2(n);
		left = n - k;
		ans += b * k + k / 2;
		n = k / 2 + left;
	}
	cout << ans <<' '<< tow <<'\n';
	return 0;
}
