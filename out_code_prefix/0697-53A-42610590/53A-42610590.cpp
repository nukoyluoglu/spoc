#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string str, s[101];
	int n;
	cin >> str;
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> s[i];
	sort(s + 1, s + n + 1);
	for (int i = 1; i <= n; i++)
		{ if (s[i].substr(0, str.length()) == str) 
			{ cout << s[i] << endl;
			return 0;
		}
	} cout << str << endl ;

	return 0;
}
