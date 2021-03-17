#include <bits/stdc++.h>

using namespace std;

long long n, b, p, x, ans;
bool l = true;
int main() 
	{ cin >> n >> b >> p;
	x = n;
	while (n > 1) 
		{ ans += (n / 2) * (b * 2 + 1);
		n = ceil(n / 2.0);
	}
	cout << ans << " " << x * p << endl ;
	return 0;
}
