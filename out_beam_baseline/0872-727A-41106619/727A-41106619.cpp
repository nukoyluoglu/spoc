#include <bits/stdc++.h>

using namespace std;

long long a, b;
long long ans[100];
int flag = 0;
int k;
void dfs(long long a, int i) 
	{ if (flag || a > b) { return; }
	ans[i] = a;
	if (a == b) 
		{ flag = 1;
		k = i;
		return;
	}
	dfs(a * 2, i + 1);
	dfs(a * 10 + 1, i + 1);
}
int main() 
	{ cin >> a >> b;
	dfs(a, 0);
	if (flag == 0) 
		{ cout << "NO" << endl;
	}  else 
		{ cout << "YES" << endl;
		cout << k + 1 << endl;
		cout << ans[0];
		for (int i = 1; i <= k; i++) { cout << ' ' << ans[i]; }
		cout << endl ;
	}
	return 0;
}
