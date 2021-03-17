#include <bits/stdc++.h>

using namespace std;

long long n, m, i, a[1007][1007], k, v1, v2, f = 0;
int main() 
	{ cin >> n >> m >> k;
	for (i = 1; i <= k; i++) 
		{ cin >> v1 >> v2;
		a[v1][v2] = 1;
		if ((a[v1][v2] + a[v1 + 1][v2] + a[v1 + 1][v2 + 1] + a[v1][v2 + 1]) == 4) 
			{ cout << i << endl;
			f = 1;
			break;
		}
		if ((a[v1][v2] + a[v1 - 1][v2] + a[v1][v2 + 1] + a[v1 - 1][v2 + 1]) == 4) 
			{ cout << i << endl;
			f = 1;
			break;
		}
		if ((a[v1][v2] + a[v1][v2 - 1] + a[v1 + 1][v2] + a[v1 + 1][v2 - 1]) == 4) 
			{ cout << i << endl;
			f = 1;
			break;
		}
		if ((a[v1][v2] + a[v1 - 1][v2] + a[v1][v2 - 1] + a[v1 - 1][v2 - 1]) == 4) 
			{ cout << i << endl;
			f = 1;
			break;
		}
	}
	if ( f == 0 ) cout << 0 << endl ;
	return 0;
}
