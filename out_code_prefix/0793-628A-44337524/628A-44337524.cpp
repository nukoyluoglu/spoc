#include <bits/stdc++.h>

using namespace std;

int n, b, p;
int main() 
	{ cin >> n >> b >> p;
	b = b * 2 + 1;
	int now = 1;
	while (now <= n) { now <<= 1; }
	now >>= 1;
	int t = n;
	long long ans = 0;
	while (t > 1) 
		{ ans += 1LL * now / 2 * b;
		t -= now / 2;
		while (now && now > t) { now >>= 1; }
	}
	cout << ans << " " << n * p << endl ;

	return 0;
}
