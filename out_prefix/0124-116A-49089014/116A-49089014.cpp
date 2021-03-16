#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, a, b, c = 0, m = 0;
	cin >> n;
	for (int i = 0; i < n; i++) 
		{ cin >> a >> b;
		c = c + b - a;
		if (m < c) m = c;
	}
	cout << m << endl ;

	return 0;
}
