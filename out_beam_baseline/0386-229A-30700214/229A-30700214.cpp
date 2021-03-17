#include <bits/stdc++.h>

using namespace std;

int dist[2][10004];
int main() 
	{ int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) 
		{ string str;
		cin >> str;
		int firstone = -1;
		int ff = 0;
		while (ff < m && str[ff] != '1') ff++;
		if (ff == m) 
			{ cout << -1 << endl;
			return 0;
		}
		firstone = ff;
		dist[0][ff] = 0;
		int j = (ff + 1) % m;
		while (true) 
			{ if (str[j] == '1') 
				{ dist[0][j] = 0;
				int k = j;
				while (dist[0][k] < dist[0][(k - 1 + m) % m]) 
					{ k = (k - 1 + m) % m;
					dist[0][k] = dist[0][(k + 1) % m] + 1;
				}
				if (j == firstone) break;
			}  else 
				{ dist[0][j] = dist[0][(j + m - 1) % m] + 1;
			}
			j = (j + 1) % m;
		}
		for (int z = 0; z < m; z++) 
			{ dist[1][z] += dist[0][z];
			dist[0][z] = 0;
		}
	}
	int minn = dist[1][0];
	for (int h = 1; h < m; h++) 
		{ if (dist[1][h] < minn) { minn = dist[1][h]; }
	}
	cout << minn << endl ;
	return 0;
}
