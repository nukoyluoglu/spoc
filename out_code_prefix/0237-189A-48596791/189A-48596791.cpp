#include <bits/stdc++.h>

using namespace std;

int a[3] = {0};
int dp[10000];
int main() 
	{ int n;
	cin >> n >> a[0] >> a[1] >> a[2];
	memset(dp, -100, sizeof(dp));
	dp[0] = 0;
	for (int i = 0; i < 3; i++) 
		{ for (int j = a[i]; j <= n; j++) { dp[j] = max(dp[j], dp[j - a[i]] + 1); }
	}
	cout << dp [ n ] << endl ;

	return 0;
}
