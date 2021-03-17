#include <bits/stdc++.h>

using namespace std;

int a[11][101], b[11][101], c[11][101], d[101], e[101];
int x, y;
int n, m, kkk, maxn;
bool cmp(int x, int y) 
	{ return d[x] > d[y];
}
int main() 
	{ cin >> n >> m >> kkk;
	for (int i = 0; i < n; i++) 
		{ string cc;
		cin >> cc;
		for (int j = 0; j < m; j++) cin >> a[i][j] >> b[i][j] >> c[i][j];
	}
	for (int i = 0; i < n; i++) 
		{ int ans;
		for (int j = 0; j < n; j++) 
			{ ans = 0;
			if (i != j) 
				{ memset(d, 0, sizeof(d));
				for (int k = 0; k < m; k++) e[k] = k;
				for (int k = 0; k < m; k++) { d[k] = b[j][k] - a[i][k]; }
				sort(e, e + m, cmp);
				int kk = kkk;
				int p;
				p = 0;
				while ((p < m) && (kk > 0)) 
					{ if (d[e[p]] <= 0) 
						{ kk = 0;
						break;
					}
					if (c[i][e[p]] <= kk) 
						{ ans = ans + c[i][e[p]] * d[e[p]];
						kk = kk - c[i][e[p]];
						p = p + 1;
					}  else 
						{ ans = ans + kk * d[e[p]];
						kk = 0;
					}
				}
				if (ans > maxn) 
					{ maxn = ans;
					x = i;
					y = j;
				}
			}
		}
	}
	cout << maxn << endl ;
}
