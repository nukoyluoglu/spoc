#include <bits/stdc++.h>

using namespace std;

int n, b, p, x = 0, y;
int main() 
	{ cin >> n >> b >> p;
	b = 2 * b + 1;
	y = n * p;
	while (n > 1) 
		{ int k = 1;
		while (2 * k <= n) k *= 2;
		x += b * k / 2;
		n -= k / 2;
	}
	cout << x << " " << y << endl ;

	return 0;
}
