#include <bits/stdc++.h>

using namespace std;

const int N = 5000 + 100;
int main() 
	{ double l, q, p, t, ans;
	while (cin >> l) 
		{ cin >> p >> q;
		t = l / (p + q);
		ans = p * t;
		cout << ans << endl ;

	}
	return 0;
}
