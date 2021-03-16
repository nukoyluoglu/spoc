#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int x, y, c = 0, m = 0;
	int n;
	cin >> n;
	while (n--) 
		{ cin >> x >> y;
		c -= x;
		c += y;
		if (c > m) { m = c; }
	}
	cout << m << endl ;

	return 0;
}
