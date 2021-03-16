#include <bits/stdc++.h>

using namespace std;

const int M = 110;
char s[M][M];
char a[M];
int f[M], t[M];
char b[M];
int main() 
	{ int n;
	while (cin >> a) 
		{ cin >> n;
		int c = 0;
		memset(f, 0, sizeof(f));
		memset(t, 0, sizeof(t));
		int len = strlen(a);
		for (int i = 0; i < n; i++) 
			{ cin >> s[i];
			int len1 = strlen(s[i]);
			if (len1 < len) 
				{ t[i] = 1;
				continue;
			}
			for (int j = 0; j < len; j++) 
				{ if (a[j] != s[i][j]) 
					{ t[i] = 1;
					break;
				}
			}
			if (t[i] == 0) 
				{ f[i] = 1;
				memset(b, 0, sizeof(b));
				strcpy(b, s[i]);
				c++;
			}
		}
		if (c == 0)
			{ cout << a << endl;
		} else 
			{ for (int i = 0; i < n; i++) 
				{ if (f[i] == 1) 
					{ if (strcmp(b, s[i]) > 0) 
						{ memset(b, 0, sizeof(b));
						strcpy(b, s[i]);
					}
				}
			}
			cout << b << endl ;

		}
	}
	return 0;
}
