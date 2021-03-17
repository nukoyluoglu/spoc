#include <bits/stdc++.h>

using namespace std;

int main() 
	{ cout.setf(ios::fixed);
	cout.precision(20);
	int n, x1, y1, x2, y2;
	int xl = 2139062143, xr = -2139062143, yl = 2139062143, yr = -2139062143;
	cin >> n;
	long long area = 0;
	while (n--) 
		{ cin >> x1 >> y1 >> x2 >> y2;
		xl = min(xl, x1);
		xr = (xr > x2 ? xr : x2);
		yl = min(yl, y1);
		yr = (yr > y2 ? yr : y2);
		area += 1LL * (x2 - x1) * (y2 - y1);
	}
	if (xr - xl == yr - yl && area == 1LL * (xr - xl) * (yr - yl))
		{ puts("YES");
	} else
		{ puts ( "NO" ) ;
	} return 0;
}
