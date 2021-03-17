#include <bits/stdc++.h>

using namespace std;

int n;
long long p, q, b;
int main() 
	{ cin >> n;
	while (n--) 
		{ cin >> p >> q >> b;
		if (p % q == 0) 
			{ cout << "Finite\n";
			continue;
		}
		q /= __gcd(p, q);
		long long g;
		while (1) 
			{ g = __gcd(q, b);
			if (g == 1) break;
			while (q % g == 0) q /= g;
		}
		if (q != 1)
			{ cout << "Infinite\n";
		} else
			{ cout << "Finite\n" ;

	} }
}
