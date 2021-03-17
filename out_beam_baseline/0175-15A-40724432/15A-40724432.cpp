#include <bits/stdc++.h>

using namespace std;

int n, t;
vector<double> coord;
int main() 
	{ cin >> n >> t;
	for (int i = 0; i < n; ++i) 
		{ int x, a;
		cin >> x >> a;
		coord.push_back(1.0 * x - 1.0 * a / 2);
		coord.push_back(1.0 * x + 1.0 * a / 2);
	}
	sort(coord.begin(), coord.end());
	int ans = 2;
	for (int i = 1; i < coord.size() - 1; i += 2) 
		{ double x1 = coord[i], x2 = coord[i + 1];
		if (x2 - x1 < t)
			{ continue;
		} else if (x2 - x1 == t)
			{ ans += 1;
		} else
			{ ans += 2;
	} }
	cout << ans << "\n" ;
}
