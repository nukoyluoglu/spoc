#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 2e5 + 10;
const int MAX_LOG = 62;
const long long INF = 1e18 + 1;
const long long MOD = 1e9 + 7;
long long n, c1, c2, ans = INF;
string s;
int m;
int main() 
	{ cin >> n >> c1 >> c2;
	cin >> s;
	for (int i = 0; i < n; i++)
		{ if (s[i] == '1') m++;
	} for (int i = 1; i <= m; i++) 
		{ long long k = n / i;
		long long r = n % i;
		long long tmp = r * (c1 + c2 * (k)*k);
		tmp += (i - r) * (c1 + c2 * (k - 1) * (k - 1));
		ans = min(ans, tmp);
	}
	cout << ans << endl ;

}
