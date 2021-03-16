#include <bits/stdc++.h>

using namespace std;

double dist(int x1, int y1, int x2, int y2) 
	{ return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}
int main() 
	{ int n, k;
	cin >> n >> k;
	bool f = true;
	int x1, y1, x2, y2;
	double totDist;
	while (n--) 
		{ if (f) 
			{ cin >> x1 >> y1;
			f = false;
		}  else 
			{ cin >> x2 >> y2;
			totDist += dist(x1, y1, x2, y2);
			x1 = x2;
			y1 = y2;
		}
	}
	double r = totDist * k / 50.0;
	cout << fixed << r << endl ;

	return 0;
}
