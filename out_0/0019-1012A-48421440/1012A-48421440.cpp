#include <bits/stdc++.h>

using namespace std;

const int N = 2e5 + 50;
const int M = 1e6;
const long long oo = 1e18;
const int mod = 1e9 + 7;
int main() 
	{ int n;
	cin >> n;
	vector<long long> a(2 * n);
	for (int i = 0; i < n * 2; i++) cin >> a[i];
	sort(a.begin(), a.end());
	long long ans = (a[n - 1] - a[0]) * (a.back() - a[n]);
	for (int i = 1; i < n; i++) { ans = min(ans, (a[i + n - 1] - a[i]) * (a.back() - a[0])); }
	cout << ans << endl ;

}
