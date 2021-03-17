#include <bits/stdc++.h>

using namespace std;

string s;
string ans[111111];
int main() 
	{ getline(cin, s);
	int n = s.size(), p = 0;
	for (int i = 0; i < n; i++) 
		{ if (s[i] == ',' || s[i] == '.' || s[i] == '!' || s[i] == '?') 
			{ ans[p++] = " ";
			ans[p - 1][0] = s[i];
		}  else if (s[i] >= 'a' && s[i] <= 'z') 
			{ int j = i;
			for (; s[j] >= 'a' && s[j] <= 'z' && j < n;) { j++; }
			ans[p++] = s.substr(i, j - i);
			i = j - 1;
		}
	}
	int l = 0;
	for (int i = 0; i < p; i++) 
		{ if (ans[i][0] >= 'a') 
			{ if (l == 1) { cout << ' '; }
			cout << ans[i];
			l = 1;
		}  else 
			{ cout << ans[i] << ' ';
			l = 0;
		}
	}
	cout << endl ;
	return 0;
}
