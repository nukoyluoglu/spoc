#include <bits/stdc++.h>

using namespace std;

int a[4];
int dp[4001];
int main() 
	{ int n;
	cin >> n >> a[1] >> a[2] >> a[3];
	memset(dp, -42, sizeof(dp));
	dp[0] = 0;
	for (int i = 1; i <= 3; i++) 
		{ for (int j = a[i]; j <= n; j++) { dp[j] = max(dp[j], dp[j - a[i]] + 1); }
	}
	cout << dp [ n ] << endl ;

}
