#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, m;
	cin >> n >> m;
	char a[n][m];
	for (int i = 0; i < n; ++i) 
		{ for (int j = 0; j < m; ++j) { cin >> a[i][j]; }
	}
	for (int i = 0; i < n; ++i) 
		{ if (!count(a[i], a[i] + m, '1')) 
			{ cout << -1 << '\n';
			return 0;
		}
	}
	int nearest[n][m], l[n][m], r[n][m];
	for (int i = 0; i < n; ++i) 
		{ int lst = -1;
		for (int j = 0; j < m; ++j) 
			{ if (a[i][j] == '1') lst = j;
		}
		bool c = true;
		for (int j = 0; j < m; ++j) 
			{ lst = (a[i][j] == '1' ? j : lst);
			c &= a[i][j] == '0';
			l[i][j] = (c ? m - lst + j : abs(j - lst));
		}
		lst = -1;
		c = true;
		for (int j = 0; j < m; ++j) 
			{ if (a[i][j] == '1') 
				{ lst = j;
				break;
			}
		}
		for (int j = m - 1; j >= 0; --j) 
			{ lst = (a[i][j] == '1' ? j : lst);
			c &= a[i][j] == '0';
			r[i][j] = (c ? lst + 1 + m - (j + 1) : abs(j - lst));
		}
	}
	for (int i = 0; i < n; ++i) 
		{ for (int j = 0; j < m; ++j) { nearest[i][j] = min(r[i][j], l[i][j]); }
	}
	int ans = 0x3f3f3f3f;
	for (int j = 0; j < m; ++j) 
		{ int cur = 0;
		for (int i = 0; i < n; ++i) { cur += nearest[i][j]; }
		ans = min(ans, cur);
	}
	cout << ans <<'\n';
}
