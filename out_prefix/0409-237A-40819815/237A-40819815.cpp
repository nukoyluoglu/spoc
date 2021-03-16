#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	int ans = 1, cnt = 1, ph = 99, pm = 99;
	for (int i = 0; i < n; ++i) 
		{ int h, m;
		cin >> h >> m;
		if (h == ph && m == pm) 
			{ ++cnt;
			if (ans < cnt) ans = cnt;
		}  else 
			{ cnt = 1;
		}
		ph = h;
		pm = m;
	}
	cout << ans << endl ;

	return 0;
}
