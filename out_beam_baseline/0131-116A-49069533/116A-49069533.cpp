#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int a, b, i, j = 0, c = 0, n, p = 0, q = 0;
	cin >> n;
	for (i = 1; i <= n; i++) 
		{ cin >> a >> b;
		p = p + a;
		q = q + b;
		c = q - p;
		if (c > j) { j = c; }
	}
	cout << j << endl ;
	return 0;
}
