#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, a, b, i, ans;
	cin >> n >> a >> b;
	vector<int> f(n);
	for (i = 0; i < n; i++) cin >> f[i];
	sort(f.rbegin(), f.rend());
	ans = -(f[a] - f[a - 1]);
	cout << ans << endl ;
	return 0;
}
