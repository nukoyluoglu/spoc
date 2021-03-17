#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 5, MAX = 3e7, MOD = 1e9 + 7;
int n, p, b, x, y;
int main() 
	{ cin >> n >> p >> b;
	y = b * n;
	while (n) 
		{ if (n / 2)
			{ x += ((n - n % 2) * p + n / 2);
		} else
			{ break;
		} n = n / 2 + n % 2;
	}
	cout << x << " " << y << "\n" ;
}
