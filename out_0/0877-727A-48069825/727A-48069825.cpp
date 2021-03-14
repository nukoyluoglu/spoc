#include <bits/stdc++.h>

using namespace std;

long int k, flag = 0;
vector<long long int> ans;
void dfs(long long int n, long long int level) 
	{ if (n == k) { flag = 1; }
	if (2 * n <= k && flag == 0) { dfs(2 * n, level + 1); }
	if (10 * n + 1 <= k && flag == 0) { dfs(10 * n + 1, level + 1); }
	if (flag == 1) { ans.push_back(n); }
	return;
}
int main() 
	{ long long int n;
	cin >> n >> k;
	dfs(n, 1);
	if (flag == 1) 
		{ cout << "YES" << endl;
		int sz = ans.size();
		cout << sz << endl;
		for (long long int i = sz - 1; i >= 1; i--) { cout << ans[i] << " "; }
		if (sz >= 1) cout << ans[0] << endl;
		return 0;
	}  else 
		{ puts ( "NO" ) ;

	}
	return 0;
}
