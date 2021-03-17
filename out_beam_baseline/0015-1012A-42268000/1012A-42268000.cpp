#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 50;
int T, n, m, L, R;
long long a[2 * N];
int main() 
	{ cin >> n;
	for (int i = 0; i < n * 2; i++) { cin >> a[i]; }
	if (n <= 1) 
		{ cout << "0" << endl;
		return 0;
	}
	sort(a, a + 2 * n);
	long long ans = (a[n - 1] - a[0]) * (a[2 * n - 1] - a[n]);
	long long C = a[2 * n - 1] - a[0];
	for (int i = 1; i <= n; i++) 
		{ long long temp = C * (a[i + n - 1] - a[i]);
		ans = min(ans, temp);
	}
	cout << ans << endl ;
	return 0;
}
