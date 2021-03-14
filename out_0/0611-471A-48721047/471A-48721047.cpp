#include <bits/stdc++.h>

using namespace std;

int b[10], c[6];
int main() 
	{ int a[6], i, x, j = 0;
	for (i = 0; i < 6; i++) 
		{ cin >> a[i];
		x = a[i];
		b[x]++;
	}
	for (i = 1; i <= 9; i++) 
		{ if (b[i] != 0) 
			{ c[j] = b[i];
			j++;
		}
	}
	sort(c, c + 3);
	if (c[0] == 1 && c[1] == 1 && c[2] == 4) 
		{ cout << "Bear" << endl;
	}  else if (c[0] == 0 && c[1] == 1 && c[2] == 5) 
		{ cout << "Bear" << endl;
	}  else if (c[0] == 0 && c[1] == 2 && c[2] == 4) 
		{ cout << "Elephant" << endl;
	}  else if (c[2] == 6) 
		{ cout << "Elephant" << endl;
	}  else 
		{ puts ( "Alien" ) ;

	}
	return 0;
}
