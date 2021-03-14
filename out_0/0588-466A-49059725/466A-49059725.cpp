#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, m, a, b, r, d, cost = 0;
	cin >> n >> m >> a >> b;
	r = n % m;
	d = n / m;
	if (m > n) 
		{ if (b < a * n) 
			{ cout << b << endl;
			return 0;
		}  else 
			{ cout << a * n << endl;
			return 0;
		}
	}
	if (d * b < a * (n - r)) 
		{ cost += (d * b);
		if (r * a < b) 
			{ cost += (r * a);
		}  else 
			{ cost += b;
		}
	}  else 
		{ cost += (a * n);
	}
	cout << cost << endl ;

	return 0;
}
