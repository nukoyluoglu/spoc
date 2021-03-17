#include <bits/stdc++.h>

using namespace std;

int n;
long long a[200001], ans;
int main() 
	{ cin >> n;
	for (int i = 1; i <= (n << 1); i++) cin >> a[i];
	sort(a + 1, a + (n << 1) + 1);
	ans = (a[n] - a[1]) * (a[n << 1] - a[n + 1]);
	for (int i = 1; i < n; i++) ans = min((a[n << 1] - a[1]) * (a[n + i] - a[i + 1]), ans);
	cout << ans << endl ;
	return 0;
}
