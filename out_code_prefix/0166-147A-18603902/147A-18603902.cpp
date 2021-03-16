#include <bits/stdc++.h>

using namespace std;

const double PI = 3.1415926535897932384626433832795;
long long mod = 1e9 + 7;
bool isp(char c) 
	{ return (c == '.' || c == ',' || c == '?' || c == '!');
}
int main() 
	{ cout.precision(12);
	cout << fixed;
	string s, ans = "";
	while (cin >> s) 
		{ if (s.size() == 1 && isp(s[0]) && ans.size())
			{ ans[ans.size() - 1] = s[0], ans += " ";
		} else
			{ ans = ans + s + " ";
	} }
	int sz = ans.size();
	int last = 0, i = 0;
	for (i = 0, last = 0; i < sz - 1; ++i) 
		{ if (ans[i] == ' ' && isp(ans[i + 1]))
			{ cout << ans.substr(last, i - last) + ans[i + 1] + " ", last = i + 2, i++;
		} else if (ans[i] == ' ')
			{ cout << ans.substr(last, i - last + 1), last = i + 1;
		} else if (isp(ans[i]))
			{ if (ans[i + 1] != ' ')
				{ cout << ans.substr(last, i - last + 1) + " ", last = i + 1;
			} else
				{ cout << ans.substr(last, i - last + 1), last = i + 1;
	} } }
	cout << ans. substr ( last, i ) <<'\n';

	return 0;
}
