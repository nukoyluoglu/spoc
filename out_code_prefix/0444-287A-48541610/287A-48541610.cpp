#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string grid[4];
	cin >> grid[0] >> grid[1] >> grid[2] >> grid[3];
	bool found = false;
	for (int i = 0; i < 3; i++) 
		{ for (int j = 0; j < 3; j++) 
			{ int c1 = 0, c2 = 0;
			for (int i1 = i; i1 <= i + 1; i1++) 
				{ for (int j1 = j; j1 <= j + 1; j1++) 
					{ if (grid[i1][j1] == '.')
						{ c1++;
					} else
						{ c2++;
				} }
			}
			if (c1 != 2) { found = true; }
		}
	}
	cout << ( found? "YES" : "NO" ) << endl ;

	return 0;
}
