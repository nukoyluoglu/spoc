#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;
int n, m, k;
int a[10][100], b[10][100], c[10][100];
int solve(int u, int v) 
	{ vector<int> profits;
	for (int i = 0; i < m; ++i)
		{ for (int j = 0; j < c[u][i]; ++j) profits.push_back(max(0, b[v][i] - a[u][i]));
	} sort(profits.rbegin(), profits.rend());
	int ans = 0;
	for (int i = 0; i < min(k, (int)profits.size()); ++i) ans += profits[i];
	return ans;
}
int main() 
	{ cin >> n >> m >> k;
	for (int i = 0; i < n; ++i) 
		{ string name;
		cin >> name;
		for (int j = 0; j < m; ++j) cin >> a[i][j] >> b[i][j] >> c[i][j];
	}
	int ans = 0;
	for (int i = 0; i < n; ++i)
		{ for (int j = 0; j < n; ++j) ans = max(ans, solve(i, j));
	} cout << ans <<'\n';

}
