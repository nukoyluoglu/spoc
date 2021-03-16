#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int r, c;
	int flag = -1;
	cin >> r >> c;
	char v[r][c];
	int empt = 0, wolf = 0, sheep = 0;
	char p;
	for (int i = 0; i < r; i++) 
		{ for (int j = 0; j < c; j++) 
			{ cin >> p;
			if (p == '.')
				{ v[i][j] = 'D';
			} else
				{ v[i][j] = p;
		} }
	}
	for (int i = 0; i < r; i++) 
		{ for (int j = 0; j < c; j++) 
			{ if (v[i][j] == 'S') 
				{ if (v[i - 1][j] == 'W' && i - 1 >= 0) flag = 0;
				if (v[i + 1][j] == 'W' && i + 1 < r) flag = 0;
				if (v[i][j + 1] == 'W' && j + 1 < c) flag = 0;
				if (v[i][j - 1] == 'W' && j - 1 >= 0) flag = 0;
			}
		}
	}
	if (flag == 0)
		{ cout << "NO" << endl;
	} else 
		{ cout << "YES" << endl;
		for (int i = 0; i < r; i++) 
			{ for (int j = 0; j < c; j++) { cout << v[i][j]; }
			cout << endl ;

		}
	}
}
