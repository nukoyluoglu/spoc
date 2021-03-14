#include <bits/stdc++.h>

using namespace std;

int arr[5], n;
int dp[4004], mn;
int fun(int rem) 
	{ if (rem == 0) return 0;
	if (rem < mn) return -11111111;
	if (dp[rem] != -1) return dp[rem];
	int ret = -11111111;
	for (int i = 0; i < 3; i++) { ret = max(ret, 1 + fun(rem - arr[i])); }
	return dp[rem] = ret;
}
int main() 
	{ memset(dp, -1, sizeof dp);
	cin >> n;
	mn = 100000000;
	for (int i = 0; i < 3; i++) 
		{ cin >> arr[i];
		mn = min(arr[i], mn);
	}
	cout << fun ( n ) ;

}
