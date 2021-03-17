#include <bits/stdc++.h>

using namespace std;

const long long int INF = (1LL << 60) - 1;
const long long int MAX = 2000001;
long long int fast_exp(long long int base, long long int exp, long long int m) 
	{ long long int res = 1;
	while (exp > 0) 
		{ if (exp % 2 == 1) { res = (res * base) % m; }
		base = (base * base) % m;
		exp /= 2;
	}
	return res % m;
}
int main() 
	{ int n, b, p;
	cin >> n >> b >> p;
	int bottle = 0, towel = 0;
	towel = p * n;
	while (n > 1) 
		{ int k = 1;
		while (k <= n) { k *= 2; }
		k /= 2;
		n = (n - k) + k / 2;
		bottle += (k / 2) * (2 * b + 1);
	}
	cout << bottle << " " << towel << endl ;
	return 0;
}
