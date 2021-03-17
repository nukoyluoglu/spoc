#include <bits/stdc++.h>

using namespace std;

int main() 
	{ double x, d, c;
	int cnt = 0, n, t;
	pair<double, double> arr[1500];
	cin >> n >> t;
	for (int i = 0; i < n; i++) 
		{ cin >> x >> d;
		d /= 2;
		arr[i] = make_pair(x - d, x + d);
	}
	sort(arr, arr + n);
	for (int i = 0; i < n - 1; i++) 
		{ c = arr[i + 1].first - arr[i].second;
		c -= t;
		if (c == 0)
			{ cnt++;
		} else if (c > 0)
			{ cnt += 2;
	} }
	cout << cnt + 2 << endl ;
	return 0;
}
