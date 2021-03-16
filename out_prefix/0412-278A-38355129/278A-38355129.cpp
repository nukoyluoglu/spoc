#include <bits/stdc++.h>

using namespace std;

int d[100 + 7][100 + 7], n, x;
int main() 
	{ cin >> n;
	for (int i = 1; i <= n; i++)
		{ for (int j = 1; j <= n; j++) d[i][j] = INT_MAX / 10;
	} for (int i = 1; i <= n; i++) d[i][i] = 0;
	for (int i = 1; i <= n; i++) 
		{ cin >> x;
		int j = i + 1;
		if (j > n) j -= n;
		d[i][j] = x;
		d[j][i] = x;
	}
	for (int k = 1; k <= n; k++)
		{ for (int i = 1; i <= n; i++)
			{ for (int j = 1; j <= n; j++)
				{ if (d[i][k] + d[k][j] < d[i][j]) d[i][j] = d[i][k] + d[k][j];
	} } } int s, t;
	cin >> s >> t;
	cout << d [ s ] [ t ] << endl ;

}
