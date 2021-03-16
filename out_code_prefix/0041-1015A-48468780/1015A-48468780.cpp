#include <bits/stdc++.h>

using namespace std;

int is[105];
int main() 
	{ int n, m, a, b;
	cin >> n >> m;
	for (int i = 0; i < n; i++) 
		{ cin >> a >> b;
		for (int j = a; j <= b; j++) is[j] = 1;
	}
	vector<int> ans;
	for (int i = 1; i <= m; i++)
		{ if (!is[i]) ans.push_back(i);
	} cout << ans.size() << "\n";
	for (int i = 0; i < ans.size(); i++)
		{ if (i != ans.size() - 1)
			{ cout << ans[i] << " ";
		} else
			{ cout << ans [ i ] << "\n" ;

	} } return 0;
}
