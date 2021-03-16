#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;
int x, y, arr[1005][1005] = {};
bool solve(int st1, int st2) 
	{ for (int z = st1; z <= st1 + 1; ++z) 
		{ for (int v = st2; v <= st2 + 1; ++v) 
			{ if (!arr[x + z][y + v]) return false;
		}
	}
	return true;
}
int main() 
	{ int n, m, k;
	cin >> n >> m >> k;
	for (int i = 1; i <= k; ++i) 
		{ cin >> x >> y;
		arr[x][y] = 1;
		for (int t = -1; t <= 0; ++t) 
			{ for (int u = -1; u <= 0; ++u) 
				{ if (solve(t, u)) return cout << i << "\n", 0;
			}
		}
	}
	return cout << 0 << "\n", 0 ;

	return 0;
}
