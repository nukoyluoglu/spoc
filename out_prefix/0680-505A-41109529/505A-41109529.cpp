#include <bits/stdc++.h>

using namespace std;

char s1[15];
char s2[15];
char s[15];
int main() 
	{ int f = 0;
	cin >> s1;
	int n = strlen(s1);
	bool flag = 0;
	for (int i = 0; i < 26; i++) 
		{ for (int j = 0; j <= n; j++) 
			{ f = 0;
			for (int k = 0; k < j; k++) { s[k] = s1[k]; }
			s[j] = char('a' + i);
			for (int k = j + 1; k <= n; k++) { s[k] = s1[k - 1]; }
			for (int i = 0, j = n; i < j; i++, j--) 
				{ if (s[i] != s[j]) 
					{ f++;
					if (f >= 1) { break; }
				}
			}
			if (f == 0) 
				{ for (int i = 0; i <= n; i++) { cout << s[i]; }
				cout << endl;
				return 0;
			}
		}
	}
	cout << "NA"

	return 0;
}
