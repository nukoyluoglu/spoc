#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string s;
	cin >> s;
	int l1 = s.length();
	bool vertikal = 0, horizontal = 0;
	for (int i = 0; i < l1; i++) 
		{ if (s[i] == '0') 
			{ if (vertikal) 
				{ vertikal = 0;
				cout << "3 1\n";
			}  else 
				{ vertikal = 1;
				cout << "1 1\n";
			}
		}  else 
			{ if (horizontal) 
				{ horizontal = 0;
				cout << "4 1\n";
			}  else 
				{ horizontal = 1;
				cout << "4 3\n" ;
			}
		}
	}
}
