#include <bits/stdc++.h>

using namespace std;

int n, i, a[1111111], ans = 0, d[1111111];
int main() 
	{ cin >> n;
	for (i = 0; i < n; i++) cin >> a[i];
	d[1] = 1;
	for (i = 2; i < n; i++) d[i] = d[i / 2] * 2;
	for (i = 0; i + 1 < n; i++) 
		{ a[i + d[n - i - 1]] += a[i];
		ans += a[i];
		cout << ans << endl ;

	}
	return 0;
}