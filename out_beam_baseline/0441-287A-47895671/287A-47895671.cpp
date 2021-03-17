#include <bits/stdc++.h>

using namespace std;

void compute() 
	{ char a[4][4];
	for (int i = 0; i < 4; i++)
		{ for (int j = 0; j < 4; j++) cin >> a[i][j];
	} for (int i = 0; i < 4; i++) 
		{ for (int j = 0; j < 4; j++) 
			{ if (j <= 2 && i <= 2) 
				{ int hutch = 0, dots = 0;
				for (int k = 0; k < 2; k++) 
					{ for (int l = 0; l < 2; l++)
						{ if (a[i + k][j + l] == '#')
							{ ++hutch;
						} else
							{ ++dots;
				} } }
				if (hutch >= 3 || dots >= 3) 
					{ cout << "YES\n";
					return;
				}
			}
		}
	}
	cout << "NO\n";
}
int main() 
	{ compute ( ) ;
	return 0;
}
