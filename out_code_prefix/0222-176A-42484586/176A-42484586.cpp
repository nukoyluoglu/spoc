#include <bits/stdc++.h>

using namespace std;

long long a[11][105];
long long b[11][105];
long long c[11][105];
bool vis[105];
long long n, m, k;
long long cal(int x, int y) 
	{ long long last = k;
	long long ans = 0;
	memset(vis, 0, sizeof(vis));
	while (last) 
		{ long long v = 0;
		long long p;
		long long flag = 0;
		for (int i = 1; i <= m; i++) 
			{ if (!vis[i]) 
				{ if (b[y][i] - a[x][i] > v) 
					{ v = b[y][i] - a[x][i];
					p = i;
					flag = 1;
				}
			}
		}
		if (flag == 0) break;
		vis[p] = 1;
		if (last >= c[x][p]) 
			{ ans += c[x][p] * v;
			last -= c[x][p];
		}  else 
			{ ans += last * v;
			last = 0;
		}
	}
	return ans;
}
int main() 
	{ cin >> n >> m >> k;
	for (int i = 1; i <= n; i++) 
		{ string s;
		cin >> s;
		for (int j = 1; j <= m; j++) cin >> a[i][j] >> b[i][j] >> c[i][j];
	}
	long long ans = 0;
	for (int i = 1; i <= n; i++)
		{ for (int j = 1; j <= n; j++) { ans = max(ans, cal(i, j)); }
	} cout << ans << "\n" ;

}
