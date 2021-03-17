#include <bits/stdc++.h>

using namespace std;

int n;
int p[200100];
int b[200100];
int vis[200200];
void dfs(int x) 
	{ vis[x] = 1;
	if (!vis[p[x]]) dfs(p[x]);
}
int main() 
	{ cin >> n;
	for (int i = 1; i <= n; i++) cin >> p[i];
	int cnt = 0;
	for (int i = 1; i <= n; i++) 
		{ cin >> b[i];
		if (b[i] == 1) cnt++;
	}
	int ans = 0;
	if (cnt % 2 == 0) ans++;
	cnt = 0;
	for (int i = 1; i <= n; i++) 
		{ if (!vis[i]) 
			{ cnt++;
			dfs(i);
		}
	}
	if (cnt == 1) cnt = 0;
	cout << ans + cnt << endl ;

	return 0;
}
