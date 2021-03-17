#include <bits/stdc++.h>

using namespace std;

int a[15][105];
int b[15][105];
int c[15][105];
bool vis[105];
int n, m, k;
int Cal(int x, int y) 
	{ memset(vis, 0, sizeof vis);
	if (x == y) return -1;
	int cost = k;
	int ans = 0;
	while (cost) 
		{ int flag;
		int maxgas = 0;
		int dp = 1;
		for (int i = 1; i <= m; i++) 
			{ if (vis[i]) continue;
			if (b[y][i] - a[x][i] > maxgas) 
				{ dp = 0;
				maxgas = b[y][i] - a[x][i];
				flag = i;
			}
		}
		if (dp) break;
		vis[flag] = 1;
		ans += min(cost, c[x][flag]) * maxgas;
		cost -= min(cost, c[x][flag]);
	}
	return ans;
}
int main() 
	{ memset(vis, 0, sizeof vis);
	cin >> n >> m >> k;
	for (int i = 1; i <= n; i++) 
		{ string s;
		cin >> s;
		for (int j = 1; j <= m; j++) { cin >> a[i][j] >> b[i][j] >> c[i][j]; }
	}
	int ans = 0;
	for (int i = 1; i <= n; i++) 
		{ for (int j = 1; j <= n; j++) { ans = max(ans, Cal(i, j)); }
	}
	cout << ans << endl ;
}
