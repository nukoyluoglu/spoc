#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, b, p, k, ptot, btot;
	cin >> n >> b >> p;
	ptot = p * n;
	btot = 0;
	while (n > 1) 
		{ k = 1 << ((int)floor(log2(n)));
		n = n - (k / 2);
		btot += ((k * b) + (k / 2));
	}
	cout << btot << " " << ptot << endl ;

	return 0;
}
