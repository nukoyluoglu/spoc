#include <bits/stdc++.h>

using namespace std;

const int N = 2e5 + 5;
int Prv[N], vis[N];
void dfs(int u) 
	{ if (vis[u]) return;
	vis[u] = true;
	dfs(Prv[u]);
}
int main() 
	{ int n;
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> Prv[i];
	int now = 1;
	for (int i = 1; i <= n; i++) 
		{ int x;
		cin >> x;
		now += x;
	}
	int Res = 0;
	for (int i = 1; i <= n; i++) 
		{ if (!vis[i]) 
			{ dfs(i);
			Res++;
		}
	}
	if (Res == 1) Res--;
	cout << Res + ( now % 2 ) << "\n" ;

	return 0;
}
