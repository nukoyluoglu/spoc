#include <bits/stdc++.h>

using namespace std;

const int N = 4005;
const int inf = 1e9;
const long long INF = 1e18;
const double PI = acos(-1.0);
const double EPS = 1e-8;
const int MOD = 1000000007;
int n, a, b, c;
int dp[N];
int main() 
	{ cin >> n >> a >> b >> c;
	for (int i = 0; i <= n; i++) dp[i] = -inf;
	dp[0] = 0;
	for (int i = 1; i <= n; i++) 
		{ if (a <= i) dp[i] = max(dp[i], dp[i - a] + 1);
		if (b <= i) dp[i] = max(dp[i], dp[i - b] + 1);
		if (c <= i) dp[i] = max(dp[i], dp[i - c] + 1);
	}
	cout << dp [ n ] << "\n" ;

	return 0;
}
