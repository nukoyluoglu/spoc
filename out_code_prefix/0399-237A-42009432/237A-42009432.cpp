#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, h, m, t = -1, c = 0, res = 1;
	cin >> n;
	for (int i = 0; i < n; ++i) 
		{ cin >> h >> m;
		int t0 = h * 60 + m;
		c = t0 == t ? c + 1 : 1;
		if (c > res) res = c;
		t = t0;
	}
	cout << res << endl ;

	return 0;
}
