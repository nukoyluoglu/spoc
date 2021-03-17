#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n;
	while (cin >> n) 
		{ long long a[2 * n + 10];
		for (int i = 0; i < 2 * n; i++) cin >> a[i];
		sort(a, a + 2 * n);
		long long ans = (a[n - 1] - a[0]) * (a[2 * n - 1] - a[n]);
		for (int i = 1; i < n; i++) ans = min(ans, (a[2 * n - 1] - a[0]) * (a[i + n - 1] - a[i]));
		cout << ans << endl ;
	}
	return 0;
}
