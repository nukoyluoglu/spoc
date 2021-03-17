#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int a, b, c, d, e, f, ans = 0, x = 0, y = 0, z = 0;
	cin >> a >> b >> c >> d >> e >> f;
	if (b > f) 
		{ ans += 2 * a * f + f * (f + 1) - f;
		x = a + f;
	}  else 
		{ ans += 2 * a * b + b * (b + 1) - b;
		x = a + b;
	}
	if (c > e) 
		{ ans += 2 * d * e + e * (e + 1) - e;
		y = c - e;
	}  else 
		{ ans += 2 * d * c + c * (c + 1) - c;
		y = e - c;
	}
	ans += 2 * x * y;
	cout << ans <<'\n';
	return 0;
}
