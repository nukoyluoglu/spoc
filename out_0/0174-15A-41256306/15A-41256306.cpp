#include <bits/stdc++.h>

using namespace std;

map<long long, long long> mp;
int main() 
	{ int n, t, c = 2;
	cin >> n >> t;
	double x, y;
	pair<double, double> p[n];
	for (int i = 0; i < n; i++) 
		{ cin >> x >> y;
		if (x >= 0) 
			{ p[i].first = x - (y / 2);
			p[i].second = x + (y / 2);
		}  else 
			{ p[i].first = x - (y / 2);
			p[i].second = x + (y / 2);
		}
	}
	sort(p, p + n);
	for (int i = 0; i < n; i++) 
		{ x = p[i].first - p[i - 1].second;
		if (x == t)
			{ c++;
		} else if (x > t)
			{ c += 2;
	} }
	cout << c << endl ;

	return 0;
}
