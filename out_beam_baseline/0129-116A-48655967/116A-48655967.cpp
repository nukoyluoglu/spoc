#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	while (cin >> n) 
		{ int ans = 0, temp = 0;
		for (int i = 0; i < n; i++) 
			{ int p, q;
			cin >> p >> q;
			temp += q;
			temp -= p;
			ans = max(ans, temp);
		}
		cout << ans << endl ;
	}
	return 0;
}
