#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, i, j, a[100][100], b[100] = {0}, k, flag;
	cin >> n;
	for (i = 0; i < n; i++) 
		{ for (j = 0; j < n; j++) { cin >> a[i][j]; }
	}
	k = 0;
	for (i = 0; i < n; i++) 
		{ flag = 1;
		for (j = 0; j < n; j++) 
			{ if (i != j) 
				{ if (a[i][j] == 1 || a[i][j] == 3) flag = 0;
			}
		}
		if (flag) b[k++] = i + 1;
	}
	if (b[0] == 0)
		{ cout << "0" << endl;
	} else 
		{ cout << k << endl;
		for (i = 0; i < k - 1; i++) { cout << b[i] << " "; }
		cout << b [ k - 1 ] << endl ;
	}
	return 0;
}
