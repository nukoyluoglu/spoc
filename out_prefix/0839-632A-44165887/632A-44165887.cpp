#include <bits/stdc++.h>

using namespace std;

long long ret[50];
int main() 
	{ int n, p;
	cin >> n >> p;
	long long ans = 1, tmp = 0;
	for (int i = 0; i < n; i++) 
		{ string s;
		cin >> s;
		if (s == "half")
			{ ret[i] = 1;
		} else
			{ ret[i] = 2, tmp++;
	} }
	for (int i = n - 2; i >= 0; i--) 
		{ if (ret[i] == 1)
			{ ans = ans * 2;
		} else
			{ ans = ans * 2 + 1;
	} }
	ans = ans * p - tmp * (p / 2);
	cout << ans << endl ;

	return 0;
}
