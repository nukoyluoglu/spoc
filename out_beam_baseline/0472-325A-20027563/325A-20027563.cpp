#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, a, b, c, d, w, h, x1 = 2e9, y1 = 2e9, x2 = 0, y2 = 0, area = 0;
	cin >> n;
	while (n--) 
		{ cin >> a >> b >> c >> d;
		w = c - a;
		h = d - b;
		area += w * h;
		x1 = min(x1, a);
		y1 = min(y1, b);
		x2 = max(x2, c);
		y2 = max(y2, d);
	}
	w = x2 - x1;
	h = y2 - y1;
	cout << ( w == h && area == w * h? "YES" : "NO" ) << endl ;
	return 0;
}
