#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, k;
	cin >> n >> k;
	double x, y, x0, y0, total(0.0);
	cin >> x0 >> y0;
	while (--n) 
		{ cin >> x >> y;
		total += sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));
		x0 = x;
		y0 = y;
	}
	cout << total * k / 50 << " " << 6 ;

	return 0;
}
