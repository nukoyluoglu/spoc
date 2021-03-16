#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int k, i, j;
	string s;
	int c[26] = {0};
	cin >> k >> s;
	if (s.size() % k != 0) 
		{ cout << -1 << endl;
		return 0;
	}
	for (i = 0; i < s.size(); i++) { c[s[i] - 'a']++; }
	for (i = 0; i < 26; i++) 
		{ if (c[i] % k != 0) 
			{ cout << -1 << endl;
			return 0;
		}
	}
	string result;
	for (i = 0; i < 26; i++) 
		{ for (j = 0; j < c[i] / k; j++) { result = result + char('a' + i); }
	}
	for (i = 0; i < k; i++) { cout << result; }
	cout << endl ;

	return 0;
}
