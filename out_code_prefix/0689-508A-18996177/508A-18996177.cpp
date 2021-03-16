#include <bits/stdc++.h>

using namespace std;

int a[1005][1005], vis[1005][1005];
int ans;
int n, m;
int fang[4][2] = {1, 0, -1, 0, 0, 1, 0, -1};
void dfs(int x, int y) 
	{ ans++;
	for (int i = 0; i < 4; ++i) 
		{ int nx = x + fang[i][0];
		int ny = y + fang[i][1];
		if (nx > 0 && nx <= n && ny > 0 && ny <= m && a[nx][ny] && !vis[nx][ny]) 
			{ vis[nx][ny] = 1;
			dfs(nx, ny);
		}
	}
}
int main() 
	{ int k, i, j;
	while (cin >> n >> m >> k) 
		{ ans = 0;
		int x, y;
		memset(a, 0, sizeof(a));
		int res = 0;
		for (i = 1; i <= k; ++i) 
			{ cin >> x >> y;
			a[x][y] = 1;
			if (!res) 
				{ ans++;
				if (a[x][y] && a[x + 1][y] && a[x][y + 1] && a[x + 1][y + 1]) res = 1;
				if (a[x][y] && a[x + 1][y] && a[x][y - 1] && a[x + 1][y - 1]) res = 1;
				if (a[x][y] && a[x - 1][y] && a[x][y + 1] && a[x - 1][y + 1]) res = 1;
				if (a[x][y] && a[x - 1][y] && a[x][y - 1] && a[x - 1][y - 1]) res = 1;
			}
		}
		if (!res) ans = 0;
		cout << ans << endl ;

	}
}
