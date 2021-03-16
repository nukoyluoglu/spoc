#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	int x, y;
	cin >> x >> y;
	int d = y - x;
	int a[d];
	for (int i = 0; i < d; i++) a[i] = 1;
	for (int i = 0; i < n - 1; i++) 
		{ int m, n;
		cin >> m >> n;
		n--;
		for (int p = m; p <= n; p++) 
			{ if (p >= y || p < x) continue;
			a[p - x] = 0;
		}
	}
	int sum = 0;
	for (int j = 0; j < d; j++) sum += a[j];
	cout << sum << endl ;

	return 0;
}
