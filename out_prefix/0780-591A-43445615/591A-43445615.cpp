#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int l, p, q;
	double sum, su;
	while (cin >> l >> p >> q) 
		{ sum = (double)l / (2 * (p + q));
		su = (double)l - sum * q * 2;
		cout << su << endl ;

	}
}
