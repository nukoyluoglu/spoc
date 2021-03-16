#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	long long int x1, y1, x2, y2, sum = 0;
	long long int minmum = INT_MIN, maxmum = INT_MIN, p = INT_MAX, q = INT_MAX;
	for (int i = 0; i < n; i++) 
		{ cin >> x1 >> y1 >> x2 >> y2;
		maxmum = max(maxmum, max(x2, x1));
		minmum = max(minmum, max(y2, y1));
		p = min(p, min(y2, y1));
		q = min(q, min(x2, x1));
		sum += fabs(x2 - x1) * fabs(y2 - y1);
	}
	if (sum == ((minmum - p) * (maxmum - q)) && (maxmum - q) == (minmum - p))
		{ cout << "YES" << endl;
	} else
		{ cout << "NO\n" ;

	} return 0;
}
