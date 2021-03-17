#include <bits/stdc++.h>

using namespace std;

long long n, a, b, c;
long long dp[5006][5005];
long long result(long long total, long long cnt) 
	{ if (total == 0) return cnt;
	long long d = 0, e = 0, f = 0;
	if (dp[total][cnt] != -1) return dp[total][cnt];
	if (a <= total) d = result(total - a, cnt + 1);
	if (b <= total) e = result(total - b, cnt + 1);
	if (c <= total) f = result(total - c, cnt + 1);
	return dp[total][cnt] = max(d, max(e, f));
}
int main() 
	{ memset(dp, -1, sizeof dp);
	cin >> n >> a >> b >> c;
	long long ans = result(n, 0);
	cout << ans << endl ;

}
