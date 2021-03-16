#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string s;
	cin >> s;
	int pntr = s.size() - 1;
	char c;
	for (int i = 0; i < s.size() / 2; i++) 
		{ if (s[i] != s[pntr]) 
			{ bool b = true;
			int pntr2 = pntr;
			for (int j = i + 1; j < (s.size() + 1) / 2; j++)
				{ if (s[j] != s[pntr2]) 
					{ b = false;
				}  else
					{ pntr2--;
			} } if (b) 
				{ c = s[i];
				for (int j = 0; j < s.size(); j++) 
					{ cout << s[j];
					if (j == pntr) cout << c;
				}
				cout << endl;
				return 0;
			}
			pntr2 = pntr - 1;
			b = true;
			for (int j = i; j < (s.size() + 1) / 2; j++)
				{ if (s[j] != s[pntr2]) 
					{ b = false;
				}  else
					{ pntr2--;
			} } if (b) 
				{ c = s[pntr];
				for (int j = 0; j < s.size(); j++) 
					{ if (j == i) cout << c;
					cout << s[j];
				}
				cout << endl;
				return 0;
			}
			cout << "NA" << endl;
			return 0;
		}  else
			{ pntr--;
	} }
	if (s.size() % 2) 
		{ for (int i = 0; i < s.size(); i++)
			{ if (i == (s.size()) / 2)
				{ cout << s[i] << s[i];
			} else
				{ cout << s[i];
		} } cout << endl;
	}  else 
		{ for (int i = 0; i < s.size(); i++)
			{ if (i == (s.size() / 2))
				{ cout << "a" << s[i];
			} else
				{ cout << s[i];
		} } cout << endl ;

	}
}
