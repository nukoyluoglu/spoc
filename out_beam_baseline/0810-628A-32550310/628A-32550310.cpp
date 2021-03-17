#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, b, p;
	cin >> n >> b >> p;
	int bowl = 0, towl = n * p;
	while (n > 1) 
		{ int k = pow(2, (int)(log(n) / log(2)));
		bowl += k / 2 * (2 * b + 1);
		n -= k / 2;
	}
	cout << bowl <<' '<< towl << endl ;
	return 0;
}
