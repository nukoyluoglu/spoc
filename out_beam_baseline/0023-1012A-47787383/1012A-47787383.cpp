#include <bits/stdc++.h>

using namespace std;

long long n, a[1000001];
int main() 
	{ cin >> n;
	n *= 2;
	for (int i = 1; i <= n; i++) cin >> a[i];
	sort(a + 1, a + n + 1);
	long long ans = (a[n / 2] - a[1]) * (a[n] - a[n / 2 + 1]);
	for (int i = 2; i <= n / 2 + 1; i++) ans = min(ans, (a[i + n / 2 - 1] - a[i]) * (a[n] - a[1]));
	cout << ans << endl ;
	return 0;
}
