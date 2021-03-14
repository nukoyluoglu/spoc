#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int mn = 50000, mn2 = mn;
	int N, mx = -1, mx2 = mx, Ar = 0;
	cin >> N;
	for (int i = 1; i <= N; ++i) 
		{ int a, b, x, y;
		cin >> a >> b >> x >> y;
		Ar += (x - a) * (y - b);
		mn = min(mn, min(a, x));
		mn2 = min(mn2, min(b, y));
		mx = max(mx, max(a, x));
		mx2 = max(mx2, max(b, y));
	}
	if (mx - mn == mx2 - mn2 && Ar == (mx - mn) * (mx2 - mn2))
		{ cout << "YES\n";
	} else
		{ cout << "NO\n" ;

	} return 0;
}
