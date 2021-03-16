#include <bits/stdc++.h>

using namespace std;

long long a, b;
char s[1000][1000];
int main() 
	{ cin >> a >> b;
	for (int i = 0; i < a; i++) 
		{ for (int j = 0; j < b; j++) { cin >> s[i][j]; }
	}
	for (int i = 0; i < a; i++) 
		{ for (int j = 0; j < b; j++) 
			{ if (s[i][j] == 'S') 
				{ if (s[i][j + 1] == 'W') 
					{ cout << "NO" << endl;
					return 0;
				}
				if (s[i][j - 1] == 'W') 
					{ cout << "NO" << endl;
					return 0;
				}
				if (s[i + 1][j] == 'W') 
					{ cout << "NO" << endl;
					return 0;
				}
				if (s[i - 1][j] == 'W') 
					{ cout << "NO" << endl;
					return 0;
				}
			}
		}
	}
	cout << "YES" << endl;
	for (int i = 0; i < a; i++) 
		{ for (int j = 0; j < b; j++) 
			{ if (s[i][j] == '.') { s[i][j] = 'D'; }
			cout << s[i][j];
		}
		cout << endl ;

	}
}
