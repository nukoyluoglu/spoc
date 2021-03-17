#include <bits/stdc++.h>

using namespace std;

const int sz = 200010;
long long int a[sz];
int main() 
	{ int n;
	cin >> n;
	for (int i = 0; i < 2 * n; i++) { cin >> a[i]; }
	sort(a, a + 2 * n);
	long long int ans = (a[n - 1] - a[0]) * (a[2 * n - 1] - a[n]);
	for (int i = n; i < 2 * n; i++) { ans = min(ans, (a[2 * n - 1] - a[0]) * (a[i] - a[i - n + 1])); }
	cout << ans << endl ;
	return 0;
}
