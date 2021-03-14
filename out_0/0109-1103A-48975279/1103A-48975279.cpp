#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100000 + 5;
int main() 
	{ string s;
	cin >> s;
	int cnt1 = 0, cnt2 = 0;
	for (int i = 0; i < s.size(); i++) 
		{ if (s[i] == '0') 
			{ if (cnt1 % 2 == 0)
				{ cout << 1 << " " << 1;
			} else
				{ cout << 3 << " " << 1;
			} cnt1++;
		}  else 
			{ if (cnt2 % 2 == 0)
				{ cout << 4 << " " << 3;
			} else
				{ cout << 4 << " " << 1;
			} cnt2++;
		}
		<< "\n" ;

	}
	return 0;
}
