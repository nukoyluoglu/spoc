#include <bits/stdc++.h>

using namespace std;

const long long inf = 1e9 + 7;
int main() 
	{ int n;
	cin >> n;
	long long a[n + 2], left[n + 2], right[n + 2], ans = 0;
	a[0] = -1;
	a[n + 1] = inf;
	for (int i = 1; i <= n; i++) cin >> a[i];
	right[0] = 0;
	for (int i = 1; i <= n; i++) right[i] = (a[i] > a[i - 1] ? right[i - 1] + 1 : 1);
	left[n + 1] = 0;
	for (int i = n; i > 0; i--) left[i] = (a[i] < a[i + 1] ? left[i + 1] + 1 : 1);
	for (int i = 1; i <= n; i++) 
		{ if (a[i - 1] + 1 < a[i + 1])
			{ ans = max(ans, 1 + left[i + 1] + right[i - 1]);
		} else
			{ ans = max(ans, max(left[i], right[i]) + 1);
	} }
	cout << ans << endl ;

}
