#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, i, sum = 2;
	double x, y, t;
	double a[2005];
	cin >> n >> t;
	for (i = 0; i < n + n; i = i + 2) 
		{ cin >> x >> y;
		a[i] = x - y * 0.5;
		a[i + 1] = x + y * 0.5;
	}
	sort(a, a + n + n);
	double b[2005];
	for (i = 1; i < n; i++) 
		{ b[i] = a[i * 2] - a[i * 2 - 1];
		if (b[i] == t)
			{ sum = sum + 1;
		} else if (b[i] > t)
			{ sum = sum + 2;
	} }
	cout << sum << endl ;
	return 0;
}
