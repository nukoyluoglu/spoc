#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	long long c1, c2;
	cin >> n >> c1 >> c2;
	int cnt = 0;
	for (int i = 1; i <= n; i++) 
		{ char c;
		cin >> c;
		if (c == '1') cnt++;
	}
	long long ans = 1e18;
	for (int i = 1; i <= cnt; i++) 
		{ long long p = n / i, mod = n % i;
		long long now = (p - 1) * (p - 1) * c2 * (i - mod) + c1 * i + p * p * mod * c2;
		ans = min(ans, now);
	}
	cout << ans << endl ;

	return 0;
}
