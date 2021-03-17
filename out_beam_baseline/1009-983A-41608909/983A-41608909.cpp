#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n, p, q, b;
	cin >> n;
	for (int i = 1; i <= n; i++) 
		{ cin >> p >> q >> b;
		long long t = __gcd(p, q);
		q /= t;
		t = b;
		while (q != 1) 
			{ t = __gcd(q, t);
			q /= t;
			if (t == 1) break;
		}
		if (q == 1)
			{ cout << "Finite\n";
		} else
			{ cout << "Infinite\n" ;
	} }
}
