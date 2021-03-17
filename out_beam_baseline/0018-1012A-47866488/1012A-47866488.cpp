#include <bits/stdc++.h>

using namespace std;

const int N = 2e6 + 5;
long long a[N];
int main() 
	{ int n;
	cin >> n;
	for (int i = 0; i < 2 * n; i++) cin >> a[i];
	sort(a, a + 2 * n);
	long long ans = (a[n - 1] - a[0]) * (a[2 * n - 1] - a[n]);
	for (int i = 1; i < n; i++) ans = min(ans, (a[i + n - 1] - a[i]) * (a[2 * n - 1] - a[0]));
	cout << ans << endl ;
	return 0;
}
