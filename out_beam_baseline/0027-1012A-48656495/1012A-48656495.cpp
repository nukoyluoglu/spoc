#include <bits/stdc++.h>

using namespace std;

const int maxn = 2e5 + 10;
long long a[maxn];
int main() 
	{ int n;
	cin >> n;
	long long ans = 0;
	for (int i = 0; i < 2 * n; i++) { cin >> a[i]; }
	sort(a, a + 2 * n);
	ans = (a[n - 1] - a[0]) * (a[2 * n - 1] - a[n]);
	for (int i = 1; i < n; i++) { ans = min((a[2 * n - 1] - a[0]) * (a[i + n - 1] - a[i]), ans); }
	cout << ans << endl ;
	return 0;
}
