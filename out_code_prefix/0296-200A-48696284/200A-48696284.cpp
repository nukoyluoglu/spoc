#include <bits/stdc++.h>

using namespace std;

int n, m, a, b, v[2100][2100];
int k, d[2100][2100], x, y;
bool solve(int x, int y, int k) 
	{ int l = max(1, x - k), r = min(x + k, n), t;
	for (int i = l; i <= r; i++) 
		{ t = k - abs(i - x);
		if (y - t > 0 && !v[i][y - t]) 
			{ a = i;
			b = y - t;
			return 1;
		}
		if (y + t <= m && !v[i][y + t]) 
			{ a = i;
			b = y + t;
			return 1;
		}
	}
	return 0;
}
int main() 
	{ cin >> n >> m >> k;
	for (int i = 0; i < k; i++) 
		{ cin >> x >> y;
		for (int j = -2; j <= 2; j++)
			{ for (int k = -2; k <= 2; k++) 
				{ if (x + j < 1 || x + j > n || y + k < 1 || y + k > m) continue;
				d[x][y] = max(d[x][y], d[x + j][y + k] - abs(j) - abs(k));
			}
		} while (!solve(x, y, d[x][y])) d[x][y]++;
		v[a][b] = 1;
		cout << a << " " << b << endl ;

	}
}
