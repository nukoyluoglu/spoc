#include <bits/stdc++.h>

using namespace std;

int p[101][101], ai[1000], bi[1000];
unsigned int ci[1000];
int main() 
	{ unsigned int n, m, k;
	cin >> n >> m >> k;
	string u;
	unsigned int o = 0;
	for (unsigned int i = 0; i < n; ++i) 
		{ cin >> u;
		for (unsigned int j = 0; j < m; ++j) 
			{ unsigned int ix = o + j;
			cin >> ai[ix] >> bi[ix] >> ci[ix];
		}
		o += m;
	}
	unsigned int e = n * m;
	int ma = 0;
	for (unsigned int u = 0; u < e; u += m) 
		{ for (unsigned int v = 0; v < e; v += m) 
			{ if (u == v) continue;
			for (unsigned int i = 1; i <= m; ++i) 
				{ unsigned int ix = u + i - 1;
				for (unsigned int j = 1; j <= k; ++j) 
					{ int mx = p[j][i - 1];
					for (unsigned int x = 1; x <= ci[ix] && x <= j; ++x) 
						{ int mm = p[j - x][i - 1] + (bi[v + i - 1] - ai[ix]) * x;
						if (mm > mx) mx = mm;
					}
					p[j][i] = mx;
				}
			}
			if (p[k][m] > ma) ma = p[k][m];
		}
	}
	cout << ma << endl ;

	return 0;
}
