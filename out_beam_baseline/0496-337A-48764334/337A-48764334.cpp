#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, m, a[1000], i, ans = INT_MAX;
	cin >> n >> m;
	for (i = 0; i < m; i++) cin >> a[i];
	sort(a, a + m);
	for (i = 0; i <= m - n; i++) ans = min(ans, a[i + n - 1] - a[i]);
	cout << ans << endl ;
}
