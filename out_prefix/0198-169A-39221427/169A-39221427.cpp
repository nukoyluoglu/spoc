#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int a, b, n, i, au, nx;
	cin >> n;
	cin >> a >> b;
	vector<int> c;
	for (i = 0; i < n; i++) 
		{ cin >> au;
		c.push_back(au);
	}
	sort(c.begin(), c.end());
	nx = c[b] - c[b - 1];
	cout << nx <<'\n';

	return 0;
}
