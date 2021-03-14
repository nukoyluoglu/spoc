#include <bits/stdc++.h>

using namespace std;

bool good[200];
int main() 
	{ int n;
	int a[300][300];
	cin >> n;
	for (int i = 1; i <= n; i++) 
		{ for (int j = 1; j <= n; j++) { cin >> a[i][j]; }
	}
	memset(good, true, sizeof(good));
	int sum = 0;
	for (int i = 1; i <= n; i++) 
		{ for (int j = 1; j <= n; j++) 
			{ if (a[i][j] == 1 || a[i][j] == 3) 
				{ good[i] = false;
				break;
			}
		}
		if (!good[i]) continue;
		for (int j = 1; j <= n; j++) 
			{ if (a[j][i] == 2 || a[j][i] == 3) 
				{ good[i] = false;
				break;
			}
		}
		if (good[i]) sum++;
	}
	cout << sum << endl;
	for (int i = 1; i <= n; i++) 
		{ if (good[i]) 
			{ if (sum == 1)
				{ cout << i << endl;
			} else
				{ cout << i << ' ';
			} sum -- ;

		}
	}
	return 0;
}
