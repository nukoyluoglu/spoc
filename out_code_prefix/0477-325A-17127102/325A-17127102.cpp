#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	int S[10];
	while (cin >> n) 
		{ memset(S, 0, sizeof(S));
		int maxx = 0, maxy = 0;
		int minx = 10000000, miny = 10000000;
		int C = 0;
		int x1, x2, y1, y2;
		for (int i = 1; i <= n; ++i) 
			{ cin >> x1 >> y1 >> x2 >> y2;
			S[i] = (x2 - x1) * (y2 - y1);
			C += S[i];
			if (x1 < minx) minx = x1;
			if (x2 > maxx) maxx = x2;
			if (y1 < miny) miny = y1;
			if (y2 > maxy) maxy = y2;
		}
		if (C == (maxx - minx) * (maxy - miny) && (maxx - minx) == (maxy - miny))
			{ cout << "YES" << endl;
		} else
			{ cout << "NO" << endl ;

	} }
	return 0;
}
