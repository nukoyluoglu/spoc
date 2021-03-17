#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	int l, r;
	int vis[101];
	while (cin >> n) 
		{ memset(vis, 0, sizeof(vis));
		cin >> l >> r;
		for (int i = l + 1; i <= r; i++) { vis[i] = 1; }
		int x, y;
		for (int i = 1; i <= n - 1; i++) 
			{ cin >> x >> y;
			for (int j = x + 1; j <= y; j++) { vis[j] = 0; }
		}
		int cnt = 0;
		for (int i = l + 1; i <= r; i++) { cnt += vis[i]; }
		cout << cnt << endl ;

	}
}
