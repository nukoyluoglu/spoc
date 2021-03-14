#include <bits/stdc++.h>

using namespace std;

const int N = 1e6;
int aa[N + 2];
int main() 
	{ int n, p;
	cin >> n >> p;
	for (int i = 1; i <= n; i++) 
		{ string s;
		cin >> s;
		if (s == "half")
			{ aa[i] = 0;
		} else
			{ aa[i] = 1;
	} }
	long long app, ans = 0;
	for (int i = n; i >= 1; i--) 
		{ if (i == n)
			{ app = 1;
		} else
			{ app = app * 2 + aa[i];
		} ans += ((app / 2) * 1LL) * p;
		if (app % 2) ans += (p / 2);
	}
	cout << ans << endl ;

	return 0;
}
