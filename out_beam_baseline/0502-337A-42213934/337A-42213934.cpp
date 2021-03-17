#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, m, a[60], mn = 1005;
	cin >> n;
	cin >> m;
	for (int i = 0; i < m; i++) { cin >> a[i]; }
	sort(a, a + m);
	for (int i = 0; i < m - n + 1; i++) 
		{ int d = a[i + n - 1] - a[i];
		if (d < mn) mn = d;
	}
	cout << mn << endl ;
	return 0;
}
