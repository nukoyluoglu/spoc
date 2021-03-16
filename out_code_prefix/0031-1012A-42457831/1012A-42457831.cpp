#include <bits/stdc++.h>

using namespace std;

long long a[202000];
int main() 
	{ int n;
	cin >> n;
	for (int i = 1; i <= (n << 1); ++i) { cin >> a[i]; }
	sort(a + 1, a + 1 + n + n);
	long long s = (s, (a[n] - a[1]) * (a[n << 1] - a[n + 1]));
	for (int i = 2; i <= n; i++) { s = min(s, (a[n << 1] - a[1]) * (a[n + i - 1] - a[i])); }
	cout << s << endl ;

	return 0;
}
