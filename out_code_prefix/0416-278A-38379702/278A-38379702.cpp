#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	int d[n + 10];
	d[0] = 0;
	for (int i = 1; i <= n; i++) { cin >> d[i]; }
	int s[n + 15];
	s[0] = 0;
	for (int i = 1; i <= n + 1; i++) { s[i] = s[i - 1] + d[i - 1]; }
	int sr, t;
	cin >> sr >> t;
	if (sr > t) swap(sr, t);
	int ans = s[t] - s[sr];
	ans = min(ans, s[sr] + s[n + 1] - s[t]);
	cout << ans << endl ;

	return 0;
}
