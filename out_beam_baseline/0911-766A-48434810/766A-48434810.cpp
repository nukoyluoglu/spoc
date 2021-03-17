#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string a, b;
	cin >> a >> b;
	if (a.size() != b.size()) 
		{ cout << max(a.size(), b.size()) << endl;
	}  else if (a.compare(b) == 0) 
		{ cout << "-1" << endl;
	}  else 
		{ int s = a.size();
		map<string, int> mp;
		int x = s;
		while (x > 0) 
			{ for (int i = 0; i < s && i + x <= s; i++) 
				{ string st(a, i, x);
				mp[st] = 1;
			}
			for (int i = 0; i < s && i + x <= s; i++) 
				{ string st(b, i, x);
				if (mp[st] == 0) 
					{ cout << st.size() << endl;
					return 0;
				}
			}
			x -- ;
		}
	}
}
