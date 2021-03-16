#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, i, j;
	int a[105][105], f[105], t, b[105];
	cin >> n;
	t = 0;
	for (i = 0; i < n; i++) f[i] = 1;
	for (i = 0; i < n; i++) 
		{ for (j = 0; j < n; j++) 
			{ cin >> a[i][j];
			if (a[i][j] == 1)
				{ f[i] = 0;
			} else if (a[i][j] == 2)
				{ f[j] = 0;
			} else if (a[i][j] == 3)
				{ f[i] = f[j] = 0;
		} }
	}
	for (i = 0; i < n; i++) 
		{ if (f[i]) b[t++] = i + 1;
	}
	cout << t << endl;
	for (i = 0; i < t; i++) 
		{ if (i != t - 1)
			{ cout << b[i] << " ";
		} else
			{ cout << b [ i ] << endl ;

	} }
	return 0;
}
