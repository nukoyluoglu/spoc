#include <bits/stdc++.h>

using namespace std;

bool a[4][4];
bool f() 
	{ for (int i = 0; i < 3; i++) 
		{ for (int j = 0; j < 3; j++) 
			{ bool bol = a[i][j];
			if (a[i + 1][j] == bol && a[i + 1][j + 1] == bol && a[i][j + 1] == bol) { return true; }
		}
	}
	return false;
}
int main() 
	{ char h;
	for (int i = 0; i < 4; i++) 
		{ for (int j = 0; j < 4; j++) 
			{ h = getchar();
			if (h == '#')
				{ a[i][j] = true;
			} else
				{ a[i][j] = false;
		} }
		h = getchar();
	}
	for (int i = 0; i < 4; i++) 
		{ for (int j = 0; j < 4; j++) 
			{ a[i][j] = (a[i][j] == true ? false : true);
			if (f() == true) 
				{ cout << "YES" << endl;
				return 0;
			}
			a[i][j] = (a[i][j] == true ? false : true);
		}
	}
	cout << "NO" << endl ;

	return 0;
}
