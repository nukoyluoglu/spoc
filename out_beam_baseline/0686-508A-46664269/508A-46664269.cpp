#include <bits/stdc++.h>

using namespace std;

const int OO = 0x3f3f3f3f, NegOO = -1 * OO, N = 1e3 + 5, mod = 1e9 + 7;
bool black[N][N];
bool check(int x, int z) 
	{ if (black[x + 1][z] && black[x + 1][z + 1] && black[x][z + 1]) return 1;
	if (black[x][z - 1] && black[x + 1][z - 1] && black[x + 1][z]) return 1;
	if (black[x][z - 1] && black[x - 1][z] && black[x - 1][z - 1]) return 1;
	if (black[x][z + 1] && black[x - 1][z] && black[x - 1][z + 1]) return 1;
	return 0;
}
int main() 
	{ int n, m, k;
	cin >> n >> m >> k;
	int ans = 0;
	int x, z;
	for (int i = 0; i < k; ++i) 
		{ cin >> x >> z;
		black[x][z] = 1;
		if (!ans) 
			{ if (check(x, z)) ans = i + 1;
		}
	}
	cout << ans << endl ;
	return 0;
}
