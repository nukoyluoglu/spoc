#include <bits/stdc++.h>

using namespace std;

char c[10005];
string s;
int main() 
	{ cin.getline(c, 10005);
	int i = 0;
	int lg = strlen(c);
	bool ok = 0;
	while (i < lg) 
		{ if (isalpha(c[i])) 
			{ if (ok == 0 && i != 0 && !isalpha(c[i - 1])) s += ' ';
			s += c[i];
			ok = 0;
		}  else 
			{ if (c[i] == '?' || c[i] == '!' || c[i] == ',' || c[i] == '.') s += c[i], s += ' ', ok = 1;
		}
		++i;
	}
	cout << s << endl ;
	return 0;
}
