#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, a, ans[105];
	while (cin >> n) 
		{ memset(ans, 0, sizeof(ans));
		for (int i = 1; i <= n; i++)
			{ for (int j = 1; j <= n; j++) 
				{ cin >> a;
				if (a == 1 || a == 3) ans[i] = 1;
			}
		} int cnt = 0, b[105];
		for (int i = 1; i <= n; i++) 
			{ if (ans[i] == 0) b[cnt++] = i;
		}
		if (cnt) 
			{ cout << cnt << endl;
			for (int i = 0; i < cnt - 1; i++) cout << b[i] << ' ';
			cout << b[cnt - 1] << endl;
		}  else
			{ cout << 0 << endl ;

	} }
	return 0;
}
