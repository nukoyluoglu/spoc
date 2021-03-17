#include <bits/stdc++.h>

using namespace std;

int vis[105], f[105][105];
int main() 
	{ int n;
	cin >> n;
	for (int i = 1; i <= n; i++) 
		{ for (int j = 1; j <= n; j++) 
			{ cin >> f[i][j];
			if (f[i][j] == 1)
				{ vis[i] = 1;
			} else if (f[i][j] == 2)
				{ vis[j] = 1;
			} else if (f[i][j] == 3)
				{ vis[i] = vis[j] = 1;
		} }
	}
	int a[105], top = 0;
	for (int i = 1; i <= n; i++) 
		{ if (!vis[i]) { a[top++] = i; }
	}
	cout << top << endl;
	for (int i = 0; i < top; i++) 
		{ if (i == top - 1)
			{ cout << a[i] << endl;
		} else
			{ cout << a [ i ] << " " ;
	} }
	return 0;
}
