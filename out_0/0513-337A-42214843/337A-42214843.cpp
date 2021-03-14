#include <bits/stdc++.h>

using namespace std;

long long ans = 1000000;
int main() 
	{ long long int n, m;
	cin >> n >> m;
	long long int a[m + 2];
	for (int i = 0; i < m; i++) cin >> a[i];
	sort(a, a + m);
	long long int k = m - n;
	for (int i = 0; i <= k; i++) { ans = min(ans, a[i + (n - 1)] - a[i]); }
	cout << ans << endl ;

	return 0;
}
