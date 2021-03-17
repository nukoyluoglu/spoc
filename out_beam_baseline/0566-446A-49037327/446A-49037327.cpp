#include <bits/stdc++.h>

using namespace std;

int a[100005], dp1[100005], dp2[100005];
int main() 
	{ int n;
	cin >> n;
	for (int i = 1; i <= n; i++) { cin >> a[i]; }
	a[0] = 0x3f3f3f3f;
	a[n + 1] = 0x3f3f3f3f;
	int ans = 0;
	for (int i = 1; i <= n; i++) { dp1[i] = dp2[i] = 1; }
	for (int i = 1; i <= n; i++) 
		{ if (a[i] > a[i - 1]) { dp1[i] = dp1[i - 1] + 1; }
		ans = max(ans, dp1[i]);
	}
	for (int i = n; i > 0; i--) 
		{ if (a[i] < a[i + 1]) { dp2[i] = dp2[i + 1] + 1; }
		ans = max(ans, dp2[i]);
	}
	for (int i = 2; i <= n; i++) { ans = max(ans, dp2[i] + 1); }
	for (int i = 1; i < n; i++) { ans = max(ans, dp1[i] + 1); }
	for (int i = 2; i < n; i++) 
		{ if (a[i + 1] - a[i - 1] > 1) { ans = max(ans, dp2[i + 1] + dp1[i - 1] + 1); }
	}
	cout << ans << endl ;
	return 0;
}
