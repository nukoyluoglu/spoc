#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, a, b, c, max = 0;
	cin >> n >> a >> b >> c;
	for (int x = 0; a * x <= n; x++) 
		{ for (int y = 0; (y * b) + (a * x) <= n; y++) 
			{ int z = (n - a * x - b * y) / c;
			if (a * x + b * y + z * c == n) 
				{ if (x + y + z > max) max = x + y + z;
			}
		}
	}
	cout << max << endl ;
	return 0;
}
