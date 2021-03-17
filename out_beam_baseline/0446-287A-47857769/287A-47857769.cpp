#include <bits/stdc++.h>

using namespace std;

char m[4][4];
bool check(int i, int j) 
	{ int cnt = 0, cnt2 = 0;
	for (int k = i; k < i + 2; k++) 
		{ for (int d = j; d < j + 2; d++) 
			{ if (m[k][d] == '#')
				{ ++cnt;
			} else
				{ ++cnt2;
		} }
	}
	if (cnt == 3 || cnt == 4 || cnt2 == 3 || cnt2 == 4) return true;
	return false;
}
int main() 
	{ for (int i = 0; i < 4; i++) 
		{ string s;
		cin >> s;
		for (int j = 0; j < 4; j++) { m[i][j] = s[j]; }
	}
	bool sol = false;
	for (int i = 0; i < 3; i++) 
		{ for (int j = 0; j < 3; j++) 
			{ if (check(i, j)) sol = true;
		}
	}
	if (sol) 
		{ cout << "YES\n";
	}  else 
		{ cout << "NO\n" ;
	}
	return 0;
}
