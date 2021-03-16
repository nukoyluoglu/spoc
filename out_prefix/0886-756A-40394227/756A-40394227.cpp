#include <bits/stdc++.h>

using namespace std;

int n;
const int MAXN = 200005;
int p[MAXN];
bool vis[MAXN];
void dfs(int idx) 
	{ vis[idx] = true;
	if (!vis[p[idx]]) dfs(p[idx]);
}
int main() 
	{ cin >> n;
	for (int i = 1; i <= n; i++) cin >> p[i];
	int counter = 0;
	for (int i = 1; i <= n; i++) 
		{ int b;
		cin >> b;
		if (b == 1) counter++;
	}
	int cycle = 0;
	for (int i = 1; i <= n; i++)
		{ if (!vis[i]) 
			{ dfs(i);
			cycle++;
		}
	} if (cycle == 1)
		{ cout << 1 - counter % 2 << "\n";
	} else
		{ cout << cycle + 1 - counter % 2 << "\n" ;

	} return 0;
}
