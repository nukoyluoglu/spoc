#include <bits/stdc++.h>

using namespace std;

int n, m, k;
int a[11][111], b[11][111], c[11][111];
int f[111];
int main() 
	{ cin >> n >> m >> k;
	for (int i = 0; i < n; ++i) 
		{ string name;
		cin >> name;
		for (int j = 0; j < m; ++j) { cin >> a[i][j] >> b[i][j] >> c[i][j]; }
	}
	int ans = 0;
	for (int st = 0; st < n; ++st)
		{ for (int fn = 0; fn < n; ++fn)
			{ if (st != fn) 
				{ int cst[111], num[111];
				for (int j = 0; j < m; ++j) 
					{ cst[j] = b[fn][j] - a[st][j];
					num[j] = c[st][j];
				}
				memset(f, -1, sizeof(f));
				f[0] = 0;
				for (int j = 0; j < m; ++j)
					{ for (int cnt = 0; cnt < num[j]; ++cnt)
						{ for (int pos = k - 1; pos >= 0; --pos)
							{ if (f[pos] >= 0) f[pos + 1] = max(f[pos + 1], f[pos] + cst[j]);
				} } } ans = max(ans, *max_element(f, f + k + 1));
			}
	} } cout << ans << endl ;

}
