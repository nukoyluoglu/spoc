#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long int k, b, n, t, i, j, m = 0, ans, r, x = 1, xx = 0;
	cin >> k >> b >> n >> t;
	for (i = 1;; i++) 
		{ r = (x * k) + b;
		if (r <= t)
			{ m++;
		} else
			{ break;
		} x = r;
	}
	ans = n - m;
	ans = max(xx, ans);
	cout << ans << endl ;
}
