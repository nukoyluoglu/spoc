#include <bits/stdc++.h>

using namespace std;

bool myCompare(const pair<string, int> &i, const pair<string, int> &j) 
	{ return i.second < j.second;
}
string s;
int check() 
	{ int x = 0, y = 0, flag = 0;
	for (int i = 0; i < s.size(); i++) 
		{ if (flag == 0) 
			{ if (s[i] == '@') 
				{ if ((i - x) > 16 || (i - x) < 1 || (i + 1 == s.size())) return 0;
				x = i + 1;
				y = i + 1;
				flag = 1;
			}  else if (isalpha(s[i]) || isdigit(s[i]) || s[i] == '_') 
				{ continue;
			}  else if (!isalpha(s[i]) || !isdigit(s[i]) || s[i] != '_') 
				{ return 0;
			}
		}  else if (flag == 1) 
			{ if (s[i] == '/') 
				{ if ((i - x) > 32 || (i - x) < 1 || (i + 1 == s.size()) || s[i - 1] == '.') return 0;
				x = i + 1;
				flag = 2;
			}  else if (s[i] == '.') 
				{ if ((i - y) > 16 || (i - y) < 1 || (i + 1 == s.size())) return 0;
				y = i + 1;
			}  else if (isalpha(s[i]) || isdigit(s[i]) || s[i] == '.' || s[i] == '_') 
				{ if (i + 1 == s.size()) 
					{ if ((i - x + 1) > 32 || (i - x + 1) < 1) return 0;
					if ((i - y + 1) > 16 || (i - y + 1) < 1) return 0;
				}
				continue;
			}  else if (!isalpha(s[i]) || !isdigit(s[i]) || s[i] != '.' || s[i] != '_') 
				{ return 0;
			}
		}  else 
			{ if (s[i] == '_' && i + 1 == s.size()) return 0;
			if (isalpha(s[i]) || isdigit(s[i]) || s[i] == '_') 
				{ if (i + 1 == s.size()) 
					{ if ((i - x + 1) > 16 || (i - x + 1) < 1) return 0;
				}
				continue;
			}
			if (!isalpha(s[i]) || !isdigit(s[i]) || s[i] != '_') { return 0; }
		}
	}
	if (flag > 0)
		{ return 1;
	} else
		{ return 0;
} }
int main() 
	{ cin >> s;
	cout << ( check ( )? "YES" : "NO" ) << endl ;

	return 0;
}
