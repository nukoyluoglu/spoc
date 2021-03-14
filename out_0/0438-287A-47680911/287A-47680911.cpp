#include <bits/stdc++.h>

using namespace std;

int main() 
	{ char c[4][4];
	for (int i = 0; i < 4; i++) 
		{ for (int j = 0; j < 4; j++) { cin >> c[i][j]; }
	}
	int x = 0, y = 0, z = 0, v = 0;
	while (true) 
		{ for (int j = z; j < z + 2; j++) 
			{ if (c[v][j] == '#') x++;
			if (c[v][j] == '.') y++;
			if (c[v + 1][j] == '#') x++;
			if (c[v + 1][j] == '.') y++;
		}
		if (x > y || y > x) 
			{ cout << "YES" << endl;
			return 0;
		}
		x = 0;
		y = 0;
		z++;
		if (z == 3) 
			{ v++;
			z = 0;
		}
		if (v == 3) { break; }
	}
	puts ( "NO" ) ;

}
