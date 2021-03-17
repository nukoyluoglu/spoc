#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int minx = 0, n, a, b, test = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) 
		{ cin >> a >> b;
		test -= a;
		test += b;
		minx = max(minx, test);
	}
	cout << minx << endl ;
	return 0;
}
