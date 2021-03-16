#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	if (e > c) swap(e, c), swap(f, b);
	cout << 2 * c * ( d + e ) - e * e + 2 * a * b + b * b << endl ;

}
