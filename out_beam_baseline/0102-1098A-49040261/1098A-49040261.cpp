#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, p[100100], s[100100], i;
	cin >> n;
	for (i = 2; i <= n; i++) cin >> p[i];
	for (i = 1; i <= n; i++) cin >> s[i];
	for (i = 2; i <= n; i++) 
		{ if (s[i] == -1) continue;
		if (s[p[i]] == -1)
			{ s[p[i]] = s[i];
		} else
			{ s[p[i]] = min(s[p[i]], s[i]);
	} }
	for (i = 2; i <= n; i++) 
		{ if (s[i] == -1) continue;
		if (s[p[i]] > s[i]) 
			{ cout << -1 << endl;
			return 0;
		}
	}
	long long ans = s[1];
	for (i = 2; i <= n; i++) 
		{ if (s[i] == -1) continue;
		ans += (s[i] - s[p[i]]);
	}
	cout << ans << endl ;
	return 0;
}
