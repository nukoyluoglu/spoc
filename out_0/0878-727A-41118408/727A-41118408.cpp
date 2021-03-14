#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 50;
long long a, b, cnt;
long long ans[N];
int i, j, k, t, m, n;
void dfs(long long st, long long step) 
	{ if (st > b) return;
	ans[step] = st;
	if (st == b) 
		{ cnt = step;
		cout << "YES" << '\n';
		cout << cnt + 1 << '\n';
		cout << ans[0];
		for (i = 1; i < cnt + 1; i++) cout << " " << ans[i];
		cout << '\n';
		return;
	}
	if (st * 2 <= b) dfs(st * 2, step + 1);
	if (st * 10 + 1 <= b) dfs(st * 10 + 1, step + 1);
}
int main() 
	{ cin >> a >> b;
	cnt = 0;
	dfs(a, 0);
	if (! cnt ) cout << "NO" << endl ;

	return 0;
}
