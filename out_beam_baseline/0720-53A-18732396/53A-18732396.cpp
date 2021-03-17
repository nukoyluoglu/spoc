#include <bits/stdc++.h>

using namespace std;

bool check(string s, string t) 
	{ if (s.length() < t.length()) return false;
	for (int i = 0; i < t.length(); i++)
		{ if (s[i] != t[i]) return false;
	} return true;
}
int main() 
	{ string t;
	cin >> t;
	int n;
	cin >> n;
	string s[1000];
	for (int i = 1; i <= n; i++) cin >> s[i];
	string min = "";
	for (int i = 1; i <= n; i++)
		{ if (check(s[i], t))
			{ if (min == "" || s[i] < min) min = s[i];
	} } if (min == "")
		{ cout << t << endl;
	} else
		{ cout << min << endl ;
	} return 0;
}
