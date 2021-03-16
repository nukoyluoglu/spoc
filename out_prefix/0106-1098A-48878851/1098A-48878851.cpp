#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5 + 5;
const long long inf = 0x3f3f3f3f;
vector<int> G[maxn];
long long sum[maxn], a[maxn];
int minson[maxn];
int n;
int getson(int v) 
	{ int minkey = inf;
	for (int i = 0; i < G[v].size(); ++i) 
		{ int to = G[v][i];
		if (minkey > getson(to)) 
			{ minkey = sum[to];
			minson[v] = to;
		}
	}
	return sum[v];
}
void dfs(int v, long long fasum, int deep) 
	{ if (deep & 1)
		{ a[v] = sum[v] - fasum;
	} else if (!G[v].size()) 
		{ a[v] = 0;
		return;
	}  else
		{ a[v] = sum[minson[v]] - fasum;
	} for (int i = 0; i < G[v].size(); ++i) dfs(G[v][i], fasum + a[v], deep + 1);
}
int main() 
	{ while (cin >> n) 
		{ int pa;
		for (int i = 2; i <= n; ++i) 
			{ cin >> pa;
			G[pa].push_back(i);
		}
		for (int i = 1; i <= n; ++i) cin >> sum[i];
		getson(1);
		dfs(1, 0, 1);
		long long maxsum = 0;
		int flag = 0;
		for (int i = 1; i <= n; ++i) 
			{ if (a[i] >= 0)
				{ maxsum += a[i];
			} else
				{ flag = 1;
		} }
		if (!flag)
			{ cout << maxsum << endl;
		} else
			{ cout << -1 << endl;
		} for ( int i = 0 ; i <= n ; i ++ ) G [ i ]. clear ( ) ;

	}
	return 0;
}
