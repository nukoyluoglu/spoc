#include <bits/stdc++.h>

using namespace std;

long long bigmod(long long a, long long b, long long m) 
	{ if (b == 0) return 1 % m;
	long long x = bigmod(a, b / 2, m);
	x = (x % m * x % m) % m;
	if (b % 2) x = (x % m * a % m) % m;
	return x % m;
}
long long po(long long a, long long b) 
	{ if (a == 1) return 1;
	long long r = 1;
	while (b--) r *= a;
	return r;
}
int main() 
	{ long long k, b, n, t, s = 0;
	cin >> k >> b >> n >> t;
	for (int i = 0; i <= n; i++) 
		{ long long v = s + po(k, i);
		if (v >= t) 
			{ if (v > t)
				{ cout << n - i + 1 << endl;
			} else
				{ cout << n - i << endl;
			} return 0;
		}
		s += b * po(k, i);
	}
	cout << "0" << endl ;
}
