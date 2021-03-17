#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string s[5];
	for (int i = 0; i < 4; i++) cin >> s[i];
	for (int x = 1; x < 4; x++)
		{ for (int y = 1; y < 4; y++) 
			{ int cnt = 0;
			for (int i = 0; i < 2; i++)
				{ for (int j = 0; j < 2; j++)
					{ if (s[x - i][y - j] != s[x][y]) cnt++;
			} } if (cnt ^ 2) return cout << "YES\n", 0;
		}
	} cout << "NO" << endl ;
	return 0;
}
