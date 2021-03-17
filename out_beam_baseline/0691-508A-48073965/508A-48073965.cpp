#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 5;
bool mark[N][N];
int main() 
	{ int n, m, k;
	cin >> n >> m >> k;
	for (int i = 0; i < k; i++) 
		{ int x, y;
		cin >> x >> y;
		mark[--x][--y] = true;
		for (int a = x - 1; a <= x; a++)
			{ for (int b = y - 1; b <= y; b++)
				{ if (~min(a, b) && a + 1 < n && b + 1 < m) 
					{ bool bad = true;
					for (int c = 0; c < 4; c++) bad &= mark[a + (c & 1)][b + (c >> 1 & 1)];
					if (bad) return cout << i + 1 << endl, 0;
				}
	} } }
	cout << "0\n" ;
	return 0;
}
