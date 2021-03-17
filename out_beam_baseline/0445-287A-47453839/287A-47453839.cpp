#include <bits/stdc++.h>

using namespace std;

char a[6][6];
int nCount(int x, int y, char c) 
	{ int res = 0;
	if (a[x + 1][y] == c) { res++; }
	if (a[x][y + 1] == c) { res++; }
	if (a[x + 1][y + 1] == c) { res++; }
	return res;
}
int main() 
	{ char z;
	for (int i = 1; i <= 4; i++) 
		{ for (int j = 1; j <= 4; j++) 
			{ cin >> z;
			a[i][j] = z;
		}
	}
	for (int i = 1; i <= 4; i++) 
		{ for (int j = 1; j <= 4; j++) 
			{ if (a[i][j] == '#') 
				{ if (nCount(i, j, '#') >= 2 || nCount(i, j, '.') >= 3) 
					{ cout << "YES" << endl;
					return 0;
				}
			}  else 
				{ if (nCount(i, j, '.') >= 2 || nCount(i, j, '#') >= 3) 
					{ cout << "YES" << endl;
					return 0;
				}
			}
		}
	}
	cout << "NO" << endl ;
	return 0;
}
