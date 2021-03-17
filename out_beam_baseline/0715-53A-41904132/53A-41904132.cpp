#include <bits/stdc++.h>

using namespace std;

string s;
int n;
inline void Run() 
	{ while (cin >> s) 
		{ string ans = "", tmp = "";
		for (int i = 1; i <= 110; ++i) ans += 'z', tmp += 'z';
		cin >> n;
		string t;
		for (int i = 1; i <= n; ++i) 
			{ cin >> t;
			if (t.size() < s.size()) continue;
			if (t.substr(0, s.size()) == s) ans = min(ans, t);
		}
		if (ans == tmp) ans = s;
		cout << ans << endl;
	}
}
int main() 
	{ Run ( ) ;
	return 0;
}
