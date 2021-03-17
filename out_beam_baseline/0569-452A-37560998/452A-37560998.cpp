#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string str[12];
	int n, i, j, ck;
	cin >> n >> str[0];
	str[1] = "vaporeon";
	str[2] = "jolteon";
	str[3] = "flareon";
	str[4] = "espeon";
	str[5] = "umbreon";
	str[6] = "leafeon";
	str[7] = "glaceon";
	str[8] = "sylveon";
	for (i = 1; i <= 8; i++) 
		{ if (str[i].size() == n) 
			{ ck = 1;
			for (j = 0; j < n; j++) 
				{ if (str[0][j] >= 'a' && str[0][j] <= 'z') 
					{ if (str[0][j] != str[i][j]) 
						{ ck = 0;
						break;
					}
				}
			}
			if (ck == 1) 
				{ cout << str[i] << endl;
				return 0;
			}
		}
	}
	cout << endl ;
	return 0;
}
