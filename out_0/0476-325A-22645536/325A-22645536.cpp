#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int i, n, x1, x2, y1, y2, mx = 99999, my = 99999, Mx = -1, My = -1, R = 0;
	cin >> n;
	for (i = 0; i < n; i++) 
		{ cin >> x1 >> y1 >> x2 >> y2;
		R += (x2 - x1) * (y2 - y1);
		if (Mx < x2) Mx = x2;
		if (My < y2) My = y2;
		if (mx > x1) mx = x1;
		if (my > y1) my = y1;
	}
	if ((Mx - mx) * (My - my) == R && Mx - mx == My - my)
		{ cout << "YES" << endl;
	} else
		{ cout << "NO\n" ;

	} return 0;
}
