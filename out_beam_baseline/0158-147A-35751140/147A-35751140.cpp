#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string s;
	int sp = 0, p = 0;
	getline(cin, s);
	string s2 = "";
	int l = s.size();
	for (int i = 0; i < l; i++) 
		{ if (s[i] == ' ')
			{ sp++;
		} else if (s[i] == ',' || s[i] == '.' || s[i] == '?' || s[i] == '!') 
			{ p++;
			s2 += s[i];
		}  else 
			{ if (sp == 0 && p == 0)
				{ s2 += s[i];
			} else if (p == 0 && sp > 0) 
				{ s2 += ' ';
				s2 += s[i];
				sp = 0;
			}  else 
				{ s2 += ' ';
				s2 += s[i];
				p = 0;
				sp = 0;
			}
		}
	}
	cout << s2 << endl ;
	return 0;
}
