#include <bits/stdc++.h>

using namespace std;

int n;
long long p, q, b;
long long NWD(long long x, long long y) 
	{ if (y == 0)
		{ return x;
	} else
		{ return NWD(y, x % y);
} }
int main() 
	{ cin >> n;
	for (int i = 1; i <= n; i++) 
		{ cin >> p >> q >> b;
		long long blep = NWD(p, q);
		q /= blep;
		blep = NWD(q, b);
		while (blep > 1) 
			{ while (q % blep == 0) q /= blep;
			blep = NWD(q, b);
		}
		if (q > 1)
			{ cout << "Infinite" << endl;
		} else
			{ cout << "Finite\n" ;

	} }
	return 0;
}
