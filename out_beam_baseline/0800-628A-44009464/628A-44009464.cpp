#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int p, b, t, x;
	cin >> p >> b >> t;
	int match = 0;
	x = p;
	while (p != 1) 
		{ match += (p / 2);
		p = (p / 2) + (p % 2);
	}
	cout << match + ( 2 * match * b ) << " " << x * t << endl ;
}
