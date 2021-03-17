#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b) 
	{ return __gcd(a, b);
}
bool solve() 
	{ long long p, q, b;
	cin >> p >> q >> b;
	if (p == 0) return true;
	long long gc = gcd(p, q);
	p /= gc;
	q /= gc;
	long long x;
	while ((x = gcd(q, b)) > 1) 
		{ while (q % x == 0) q /= x;
		x = gcd(q, b);
	}
	return q == 1;
}
int main() 
	{ int t;
	cin >> t;
	while (t--) 
		{ bool is = solve();
		cout << ( is? "Finite" : "Infinte" ) << endl ;

	}
	return 0;
}
