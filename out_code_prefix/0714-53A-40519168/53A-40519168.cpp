#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string s[101];
	int n;
	string t;
	cin >> t;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> s[i];
	sort(s, s + n);
	for (int i = 0; i < n; i++) 
		{ if (s[i].length() < t.length()) continue;
		int j = 0;
		while (j < (int)t.length()) 
			{ if (s[i][j] != t[j]) break;
			j++;
		}
		if (j == (int)t.length()) 
			{ cout << s[i] << endl;
			return 0;
		}
	}
	cout << t << endl ;

	return 0;
}
