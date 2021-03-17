#include <bits/stdc++.h>

using namespace std;

bool a[1005][1005];
int main() 
	{ int n, m;
	cin >> n >> m;
	int k;
	cin >> k;
	for (int c = 1; c <= k; c++) 
		{ int x, y;
		cin >> x >> y;
		a[x][y] = true;
		if (a[x][y] && a[x + 1][y] && a[x][y + 1] && a[x + 1][y + 1]) 
			{ cout << c << endl;
			return 0;
		}  else if (a[x][y] && a[x - 1][y] && a[x][y + 1] && a[x - 1][y + 1]) 
			{ cout << c << endl;
			return 0;
		}  else if (a[x][y] && a[x - 1][y] && a[x][y - 1] && a[x - 1][y - 1]) 
			{ cout << c << endl;
			return 0;
		}  else if (a[x][y] && a[x + 1][y] && a[x][y - 1] && a[x + 1][y - 1]) 
			{ cout << c << endl;
			return 0;
		}
	}
	cout << 0 << "\n" ;
	return 0;
}
