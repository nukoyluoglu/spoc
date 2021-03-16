#include <bits/stdc++.h>

using namespace std;

bool subset(string n1, string n2, int len) 
	{ for (int i = 0; i < len; i++) 
		{ if (n1[i] != n2[i]) return false;
	}
	return true;
}
string small_min(string n1, string n2) 
	{ if (n1.length() < n2.length()) return n1;
	return n2;
}
int main() 
	{ string s, ans;
	cin >> s;
	string ara[110];
	int n;
	cin >> n;
	int f = 0;
	for (int i = 0; i < n; i++) 
		{ cin >> ara[i];
		int j;
		for (j = 0; j < s.size(); j++) 
			{ if (ara[i][j] != s[j]) break;
		}
		if (j == s.size()) 
			{ if (f == 0) ans = ara[i];
			f = 1;
			ans = min(ans, ara[i]);
		}
	}
	if (f == 0)
		{ cout << s << endl;
	} else
		{ cout << ans << endl ;

	} return 0;
}
