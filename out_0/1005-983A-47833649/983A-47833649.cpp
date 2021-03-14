#include <bits/stdc++.h>

using namespace std;

long long n, p, b, q;
long long gcd(long long a, long long b) 
	{ if (b == 0) return a;
	return gcd(b, a % b);
}
int main() 
	{ cin >> n;
	while (n--) 
		{ cin >> p >> q >> b;
		long long tmp = gcd(p, q);
		p /= tmp;
		q /= tmp;
		long long div = gcd(b, q);
		while ((div = gcd(b, q)) != 1)
			{ while (q % div == 0) q /= div;
		} if (q == 1)
			{ cout << "Finite" << endl;
		} else
			{ puts ( "Infinite" ) ;

	} }
	return 0;
}
