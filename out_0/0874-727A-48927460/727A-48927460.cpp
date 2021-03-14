#include <bits/stdc++.h>

using namespace std;

long long a, b, n;
long long ans[1010];
bool flag;
void dfs(long long x, long long y, long long step) 
	{ ans[step] = x;
	if (flag || x > y) return;
	if (x == y) 
		{ n = step;
		flag = true;
		return;
	}
	dfs(x * 2, y, step + 1);
	if (!flag) dfs(x * 10 + 1, y, step + 1);
}
int main() 
	{ while (cin >> a >> b) 
		{ flag = false;
		dfs(a, b, 1);
		if (flag) 
			{ cout << "YES" << endl;
			cout << n << endl;
			for (int i = 1; i <= n; i++) cout << ans[i] << (i == n ? '\n' : ' ');
		}  else 
			{ puts ( "NO" ) ;

		}
	}
	return 0;
}
