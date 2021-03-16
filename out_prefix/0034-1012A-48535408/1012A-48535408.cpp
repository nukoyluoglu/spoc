#include <bits/stdc++.h>

using namespace std;

const int MAXN = (int)(2 * 1e5 + 5);
int n;
long long a[MAXN];
int main() 
	{ cin >> n;
	for (int i = 0; i < n + n; i++) { cin >> a[i]; }
	sort(a, a + n + n);
	if (n <= 1) 
		{ cout << "0" << endl;
	}  else 
		{ long long ans = a[n - 1] - a[0];
		ans *= a[n + n - 1] - a[n];
		long long l = a[n + n - 1] - a[0];
		for (int i = 1; i <= n; i++) { ans = min(ans, l * (a[i + n - 1] - a[i])); }
		cout << ans << endl ;

	}
}
