#include <bits/stdc++.h>

using namespace std;

string s, s1[101];
int n, ok;
int main() 
	{ cin >> s >> n;
	for (int i = 1; i <= n; ++i) cin >> s1[i];
	for (int i = n; i >= 1; --i)
		{ for (int j = 1; j < i; ++j)
			{ if (s1[j] > s1[j + 1]) swap(s1[j], s1[j + 1]);
	} } for (int k = 1; k <= n; ++k) 
		{ ok = 1;
		for (int i = 0; i < s.length(); ++i)
			{ if (s[i] != s1[k][i]) 
				{ ok = 0;
				break;
			}
		} if (ok) 
			{ cout << s1[k] << endl;
			return 0;
		}
	}
	cout << s << endl ;

	return 0;
}
