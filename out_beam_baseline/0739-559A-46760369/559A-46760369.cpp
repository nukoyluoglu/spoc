#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	int x = a + b + c;
	int res = (x * x) - (a * a) - (c * c) - (e * e);
	cout << res << endl ;
	return 0;
}
