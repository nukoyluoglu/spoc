#include <bits/stdc++.h>

using namespace std;

int N;
long long P, Q, B;
long long gcd(long long x, long long y) 
	{ if (y == 0) return x;
	return gcd(y, x % y);
}
int main() 
	{ cin >> N;
	while (N--) 
		{ cin >> P >> Q >> B;
		P %= Q;
		long long G = gcd(P, Q);
		Q /= G;
		long long C = gcd(B, Q);
		while (C != 1) 
			{ Q /= C;
			C = gcd(C, Q);
		}
		if (Q != 1)
			{ cout << "Infinite\n";
		} else
			{ cout << "Finite\n" ;

	} }
	return 0;
}
