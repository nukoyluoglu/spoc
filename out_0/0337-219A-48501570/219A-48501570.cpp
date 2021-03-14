#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int T, i, j, count = 1, d, m = 0;
	char s[1000], k[1000];
	cin >> T >> s;
	j = strlen(s);
	sort(s, s + j);
	for (i = 0; i < j; i++) 
		{ if (s[i] == s[i + 1]) 
			{ count += 1;
		}  else 
			{ if (count % T == 0) 
				{ d = count / T;
				while (d--) 
					{ k[m] = s[i];
					m++;
				}
				count = 1;
			}  else 
				{ cout << "-1" << endl;
				return 0;
			}
		}
	}
	k[m] = '\0';
	while (T--) 
		{ for (i = 0; k[i] != '\0'; i++) { cout << k[i]; }
	}
	cout << endl ;

	return 0;
}
