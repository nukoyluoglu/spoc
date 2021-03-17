#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5 + 2;
long long a[maxn * 2];
int main() 
	{ int n;
	cin >> n;
	long long m = n * 2;
	for (int i = 1; i <= m; i++) { cin >> a[i]; }
	sort(a + 1, a + m + 1);
	long long ans = 1e18;
	for (int i = 1; i <= n; i++) 
		{ if (i == 1) 
			{ ans = min(ans, (a[n] - a[1]) * (a[m] - a[n + 1]));
		}  else 
			{ ans = min(ans, (a[m] - a[1]) * (a[n + i - 1] - a[i]));
		}
	}
	cout << ans << endl ;

	return 0;
}
