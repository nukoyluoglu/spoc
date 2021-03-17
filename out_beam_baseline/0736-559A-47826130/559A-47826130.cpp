#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int a[6];
	for (int i = 0; i < 6; ++i) cin >> a[i];
	int n = a[0] + a[1];
	int l[n] = {}, r[n] = {};
	for (int i = 0; i < a[1]; ++i) l[i] = 1;
	for (int i = a[1] + 1; i < n; ++i) l[i] = -1;
	for (int i = 0; i < a[3]; ++i) r[i] = 1;
	for (int i = a[3] + 1; i < n; ++i) r[i] = -1;
	int ans = 0, step = 2 * a[2] - 1;
	for (int i = 0; i < n; ++i) 
		{ step += l[i] + r[i];
		ans += step;
	}
	cout << ans << endl ;
	return 0;
}
