#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	int x0, y0, x1, y1, a = 0;
	x0 = y0 = 1e9 + 87;
	x1 = y1 = -9e8;
	for (int i = 0; i < n; ++i) 
		{ int l, b, r, u;
		cin >> l >> b >> r >> u;
		a += (r - l) * (u - b);
		x0 = min(x0, l);
		x1 = max(x1, r);
		y0 = min(y0, b);
		y1 = max(y1, u);
	}
	x1 -= x0;
	y1 -= y0;
	cout << ( x1 == y1 && x1 * y1 == a? "YES\n" : "NO\nt" ) << endl ;

}
