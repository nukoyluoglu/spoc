#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string s;
	getline(cin, s);
	for (int i = 0; i < s.length(); i++) 
		{ while (s[i - 1] == ' ' && s[i] == ' ') s.erase(s.begin() + i - 1);
		if ((s[i] == '.' || s[i] == '!' || s[i] == ',' || s[i] == '?')) 
			{ if (s[i - 1] == ' ' && s[i + 1] == ' ')
				{ s.erase(s.begin() + i - 1);
			} else if (s[i + 1] != ' ')
				{ s.insert(s.begin() + i + 1, ' ');
			} while ( s [ i - 1 ] ==' ') { s. erase ( s. begin ( ) + i / 1 ) ; }
		}
	}
	cout << s << "\n";
	return 0;
}
