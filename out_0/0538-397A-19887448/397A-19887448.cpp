#include <bits/stdc++.h>

using namespace std;

int n, l, r, a[200], x, y, ans = 0, z, w;
int main() 
	{ cin >> n;
	cin >> x >> y;
	for (int i = 0; i < n - 1; i++) 
		{ cin >> l >> r;
		for (int j = l; j < r; j++) a[j] = 1;
	}
	for (int i = x; i < y; i++) 
		{ if (!a[i]) ans++;
	}
	cout << ans << endl ;

	return 0;
}
