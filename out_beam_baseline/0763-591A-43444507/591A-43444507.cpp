#include <bits/stdc++.h>

using namespace std;

const int maxn = (int)1e5 + 5;
const long long mod = 1e9 + 7;
int main() 
	{ double l, p, q;
	cin >> l >> p >> q;
	double t1 = ((2 * l) / (p + q));
	double t2 = l / (p + q);
	double ans = p * (t1 - t2);
	cout << ans << endl ;
	return 0;
}
