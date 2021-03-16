#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string s;
	while (getline(cin, s)) 
		{ string n = "";
		int d = s.length();
		for (int i = 0; i < d; i++) 
			{ if (s[i] == ' ') 
				{ if (n[n.length() - 1] != ' ') { n = n + s[i]; }
			}  else if (s[i] == '.' || s[i] == ',' || s[i] == '!' || s[i] == '?') 
				{ if (n[n.length() - 1] != ' ') 
					{ n = n + s[i] + ' ';
				}  else 
					{ n.erase(n.length() - 1);
					n = n + s[i] + ' ';
				}
			}  else 
				{ n = n + s[i];
			}
		}
		for (int i = 0; i < n.length(); i++) cout << n[i];
		cout << endl ;

	}
	return 0;
}
