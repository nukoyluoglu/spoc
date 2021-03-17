#include <bits/stdc++.h>

using namespace std;

int a[105][105], b[105][105], c[105][105], n, m, k;
int buy(int x, int y) 
	{ int v[105] = {0};
	int ans = 0, i;
	int last = k;
	while (last) 
		{ int maxn = 0;
		int maxi;
		int num;
		for (i = 1; i <= m; i++) 
			{ if (v[i]) continue;
			if (b[y][i] - a[x][i] > maxn) 
				{ maxi = i;
				maxn = b[y][i] - a[x][i];
			}
		}
		if (maxn == 0) break;
		num = min(last, c[x][maxi]);
		ans += num * maxn;
		v[maxi] = 1;
		last -= num;
	}
	return ans;
}
int main() 
	{ int i, j;
	string s;
	cin >> n >> m >> k;
	for (i = 1; i <= n; i++) 
		{ cin >> s;
		for (j = 1; j <= m; j++) { cin >> a[i][j] >> b[i][j] >> c[i][j]; }
	}
	int ans = 0;
	for (i = 1; i <= n; i++) 
		{ for (j = 1; j <= n; j++) { ans = max(ans, buy(i, j)); }
	}
	cout << ans << endl ;

	return 0;
}
