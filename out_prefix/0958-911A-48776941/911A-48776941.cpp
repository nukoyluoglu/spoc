#include <bits/stdc++.h>

using namespace std;

int n, a[100005], Min, pre, ans = 100005;
int main() 
	{ cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	Min = a[1];
	for (int i = 2; i <= n; i++) Min = min(Min, a[i]);
	for (int i = 1; i <= n; i++)
		{ if (a[i] == Min) 
			{ if (!pre)
				{ pre = i;
			} else
				{ ans = min(ans, i - pre), pre = i;
		} }
	} cout << ans << endl ;

	return 0;
}
