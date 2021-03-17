#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	long long ans = (a + b + c) * (a + b + c) - a * a - c * c - e * e;
	cout << ans << endl ;
	return 0;
}
