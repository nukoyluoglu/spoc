#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	string s[110], st;
	cin >> st >> n;
	for (int i = 0; i < n; i++) cin >> s[i];
	sort(s, s + n);
	for (int i = 0; i < n; i++)
		{ if (s[i].substr(0, st.size()) == st) 
			{ cout << s[i] << endl;
			return 0;
		}
	} cout << st << endl ;
	return 0;
}
