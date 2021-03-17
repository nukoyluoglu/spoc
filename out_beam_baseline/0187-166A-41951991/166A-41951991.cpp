#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, m, x[51], i, j, k, a, b;
	while (cin >> n >> m) 
		{ j = 0;
		for (i = 0; i < n; i++) 
			{ cin >> a >> b;
			x[i] = a * 50 - b;
		}
		sort(x, x + n);
		for (i = 0; i < n; i++) 
			{ if (x[i] == x[n - m]) { j++; }
		}
		cout << j << endl ;
	}
	return 0;
}
