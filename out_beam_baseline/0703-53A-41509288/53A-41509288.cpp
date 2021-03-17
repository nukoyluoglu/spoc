#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string ss;
	cin >> ss;
	int n;
	cin >> n;
	cin.ignore();
	string res = ss;
	bool noe = 0;
	for (int i = 0; i < n; i++) 
		{ string s;
		cin >> s;
		string tmp = "";
		for (int j = 0, ii = 0; j < s.length(); j++) 
			{ if (ss[ii] == s[j])
				{ ii++;
			} else
				{ ii = 0;
			} if (ii == ss.length()) 
				{ if (!noe)
					{ res = s.substr(j - ii + 1, s.length()), noe = 1;
				} else 
					{ tmp = s.substr(j - ii + 1, s.length());
					res = min(res, tmp);
					ii = 0;
				}
			}
		}
	}
	cout << res <<'\n';
	return 0;
}
