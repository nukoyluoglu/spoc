#include <bits/stdc++.h>

using namespace std;

long long x, y;
int main() 
	{ int T;
	cin >> T;
	while (T--) 
		{ cin >> x >> y;
		long long r = y % x;
		cout << x << " " << y - r << endl ;
	}
	return 0;
}
