#include <bits/stdc++.h>

using namespace std;

string s;
int r[1001];
int c[1001];
int main() 
	{ cin >> s;
	int n = s.length();
	bool slot_0 = false;
	bool slot_1 = false;
	for (int i = 0; i < n; i++) 
		{ if (s[i] == '0') 
			{ if (!slot_0) 
				{ cout << "1 1\n";
				slot_0 = true;
			}  else 
				{ cout << "3 1\n";
				slot_0 = false;
			}
		}  else 
			{ if (!slot_1) 
				{ cout << "4 3\n";
				slot_1 = true;
			}  else 
				{ cout << "4 1\n";
				tot_1 = false ;

			}
		}
	}
}
