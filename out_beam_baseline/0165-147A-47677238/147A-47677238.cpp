#include <bits/stdc++.h>

using namespace std;

string s;
int p;
char ans[111111];
int main() 
	{ getline(cin, s);
	int n = s.size();
	for (int i = 0; i < n; i++) 
		{ if (s[i] >= 'a' && s[i] <= 'z') 
			{ ans[p++] = s[i];
		}  else if (s[i] == ',' || s[i] == '.' || s[i] == '?' || s[i] == '!') 
			{ for (; p && ans[p - 1] == ' ';) { p--; }
			ans[p++] = s[i];
			ans[p++] = ' ';
		}  else if (s[i] == ' ') 
			{ if (ans[p - 1] != ' ') { ans[p++] = s[i]; }
		}
	}
	cout << ans << endl ;
	return 0;
}
