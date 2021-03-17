#include <bits/stdc++.h>

using namespace std;

const int N = 100001;
vector<int> g[N];
int n, val[N];
long long sum[N];
bool dfs(int u, int p) 
	{ if (g[u].size() == 1 && p != -1) 
		{ if (sum[u] == -1) 
			{ val[u] = 0;
			sum[u] = sum[p];
		}  else
			{ val[u] = sum[u] - sum[p];
		} return true;
	}
	if (sum[u] == -1) 
		{ long long mn = 1e9;
		for (int i = 0; i < g[u].size(); ++i) 
			{ int v = g[u][i];
			if (v == p) continue;
			long long diff = sum[v] - sum[p];
			if (diff < 0) return false;
			mn = min(mn, diff);
		}
		val[u] = mn;
		sum[u] = sum[p] + val[u];
	}  else if (p != -1)
		{ val[u] = sum[u] - sum[p];
	} bool check = 1;
	for (int i = 0; i < g[u].size(); ++i) 
		{ int v = g[u][i];
		if (v == p) continue;
		check = check && dfs(v, u);
	}
	return check;
}
int main() 
	{ cin >> n;
	for (int i = 0; i < n - 1; ++i) 
		{ int p;
		cin >> p;
		--p;
		g[p].push_back(i + 1);
		g[i + 1].push_back(p);
	}
	for (int i = 0; i < n; ++i) cin >> sum[i];
	val[0] = sum[0];
	if (!dfs(0, -1))
		{ cout << -1 << endl;
	} else 
		{ long long s = 0;
		for (int i = 0; i < n; ++i) s += val[i];
		cout << s << endl ;
	}
	return 0;
}
