#include <bits/stdc++.h>

using namespace std;

int main() 
	{ map<string, int> mp;
	mp["ABSINTH"] = mp["BEER"] = mp["BRANDY"] = mp["CHAMPAGNE"] = 1;
	mp["GIN"] = mp["RUM"] = mp["SAKE"] = mp["TEQUILA"] = mp["VODKA"] = 1;
	mp["WHISKEY"] = mp["WINE"] = 1;
	int n;
	cin >> n;
	int cnt = 0;
	while (n--) 
		{ string s;
		cin >> s;
		if (mp[s])
			{ cnt++;
		} else if (s[0] >= '0' && s[0] <= '9') 
			{ stringstream geek(s);
			int x = 0;
			geek >> x;
			if (x < 18) cnt++;
		}
	}
	cout << cnt << endl ;

	return 0;
}
