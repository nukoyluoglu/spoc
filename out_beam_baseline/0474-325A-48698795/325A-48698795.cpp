#include <bits/stdc++.h>

using namespace std;

int n;
int main() 
	{ cin >> n;
	int xmin = 1000000000, xmax = -1, ymin = 1000000000, ymax = -1;
	int act = 0;
	for (int i = 1; i <= n; i++) 
		{ int a, b, c, d;
		cin >> a >> b >> c >> d;
		xmin = min(xmin, a);
		xmin = min(xmin, c);
		xmax = max(xmax, a);
		xmax = max(xmax, c);
		ymin = min(ymin, b);
		ymin = min(ymin, d);
		ymax = max(ymax, b);
		ymax = max(ymax, d);
		act += (abs(a - c) * abs(b - d));
	}
	if (ymax - ymin == xmax - xmin && act == ((ymax - ymin) * (xmax - xmin)))
		{ cout << "YES\n";
	} else
		{ cout << "NO\n" ;
	} return 0;
}
