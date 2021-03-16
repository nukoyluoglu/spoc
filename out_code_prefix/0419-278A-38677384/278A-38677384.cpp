#include <bits/stdc++.h>

using namespace std;

int n, i, s1, s2, s, t, a[105];
int main() 
	{ cin >> n;
	for (i = 1; i <= n; i++) cin >> a[i];
	cin >> s >> t;
	if (s > t) swap(s, t);
	for (i = s; i < t; i++) s1 += a[i];
	for (i = 1; i < s; i++) s2 += a[i];
	for (i = n; i >= t; i--) s2 += a[i];
	cout << min ( s1, s2 ) << endl ;

	return 0;
}
