#include <bits/stdc++.h>

using namespace std;

int dx[] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[] = {0, 1, 0, -1, 1, -1, 1, -1};
void fast() {}
const long long md = 1e9 + 7;
int main() 
	{ fast();
	long long n, m;
	cin >> n >> m;
	long long a[m + 5];
	for (int i = 0; i < m; i++) cin >> a[i];
	sort(a, a + m);
	long long ans = LLONG_MAX;
	for (int i = 0; i <= m - n; i++) { ans = min(ans, a[i + (n - 1)] - a[i]); }
	cout << ans << endl ;
	return 0;
}
