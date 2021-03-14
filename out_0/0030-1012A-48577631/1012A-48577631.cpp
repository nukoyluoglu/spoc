#include <bits/stdc++.h>

using namespace std;

long long a[200020];
int main() 
	{ int n;
	cin >> n;
	for (int i = 1; i <= 2 * n; i++) cin >> a[i];
	sort(a + 1, a + 2 * n + 1);
	long long min1 = (a[n] - a[1]) * (a[2 * n] - a[n + 1]);
	for (int i = 2; i <= n + 1; i++) { min1 = min(min1, (a[2 * n] - a[1]) * (a[i + n - 1] - a[i])); }
	cout << min1 << endl ;

	return 0;
}
