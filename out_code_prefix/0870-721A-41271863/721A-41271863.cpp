#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	string s;
	cin >> n >> s;
	int cnt = -1, ans[100] = {0};
	char p = 'W';
	for (int i = 0; i < n; ++i) 
		{ char c = s[i];
		if (c == 'B') 
			{ if (p == 'W') { ++cnt; }
			++ans[cnt];
		}
		p = c;
	}
	cout << cnt + 1 << endl;
	if (cnt + 1 > 0) 
		{ bool first = true;
		for (int i = 0; i <= cnt; ++i) 
			{ if (first)
				{ first = false;
			} else
				{ cout << " ";
			} cout << ans[i];
		}
		cout << endl ;

	}
	return 0;
}
