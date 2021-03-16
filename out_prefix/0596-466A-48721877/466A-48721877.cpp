#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int m, n, a, b, cost;
	cin >> n >> m >> a >> b;
	if (a > (b / m)) 
		{ cost = (n / m) * b;
		if (a * (n % m) < b)
			{ cost += a * (n % m);
		} else
			{ cost += b;
	} }  else
		{ cost = n * a;
	} cout << cost << endl ;

	return 0;
}
