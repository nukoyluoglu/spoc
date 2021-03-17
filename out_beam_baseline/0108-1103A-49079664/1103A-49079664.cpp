#include <bits/stdc++.h>

using namespace std;

bool l, r;
string s;
int main() 
	{ cin >> s;
	for (int i = 0; i < s.size(); i++) 
		{ if (s[i] == '0' && l) 
			{ cout << "3 1" << endl;
			l = false;
		}  else if (s[i] == '0') 
			{ cout << "1 1" << endl;
			l = true;
		}  else if (s[i] == '1' && r) 
			{ cout << "4 1" << endl;
			r = false;
		}  else 
			{ cout << "4 3" << endl;
			r = true ;
		}
	}
	return 0;
}
