#include <bits/stdc++.h>

using namespace std;

const int maxn = 2e5 + 10;
int n, m;
string s[110];
int l[110][10010];
int r[110][10010];
int main() 
	{ cin >> n >> m;
	for (int i = 0; i < n; ++i) cin >> s[i];
	bool bad = false;
	for (int i = 0; i < n; ++i) 
		{ int last = -1;
		for (int j = 0; j < m; ++j)
			{ if (s[i][j] == '0')
				{ l[i][j] = (last == -1 ? -1 : j - last);
			} else
				{ l[i][j] = 0, last = j;
		} } if (last < 0) bad = true;
		last = -1;
		for (int j = m - 1; j >= 0; --j)
			{ if (s[i][j] == '0')
				{ r[i][j] = (last == -1 ? -1 : last - j);
			} else
				{ r[i][j] = 0, last = j;
		} } for (int j = 0; j < m; ++j)
			{ if (l[i][j] < 0) l[i][j] = j + l[i][m - 1] + 1;
		} for (int j = m - 1; j >= 0; --j)
			{ if (r[i][j] < 0) r[i][j] = (m - 1) - j + r[i][0] + 1;
	} }
	if (bad) 
		{ cout << -1 << "\n";
		return 0;
	}
	long long ans = n * m + 1;
	for (int j = 0; j < m; ++j) 
		{ long long cur = 0;
		for (int i = 0; i < n; ++i) cur += min(l[i][j], r[i][j]);
		ans = min(ans, cur);
	}
	cout << ans << "\n" ;

}
