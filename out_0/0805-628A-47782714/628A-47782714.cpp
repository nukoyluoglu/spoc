#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, b, p, m;
	cin >> n >> b >> p;
	p = p * n;
	for (m = 0; n >= 2; m = m + n / 2, n = n / 2 + n % 2)
		{ ;
	} cout << ( b * 2 + 1 ) * m << " " << p << endl ;

	return 0;
}
