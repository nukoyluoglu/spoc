#include <bits/stdc++.h>

using namespace std;

int p[3];
bool dp[4000 + 10][4000 + 10];
int main() 
	{ int n;
	cin >> n;
	for (int i = 0; i < 3; i++) cin >> p[i];
	int minp = min(min(p[0], p[1]), p[2]), maxp = max(max(p[0], p[1]), p[2]);
	dp[0][0] = true;
	for (int i = minp; i <= n; i++)
		{ for (int k = 1; k <= i / minp; k++)
			{ for (int j = 0; j < 3; j++)
				{ if (i >= p[j]) dp[i][k] |= dp[i - p[j]][k - 1];
	} } } for (int i = n / minp; i >= 1; i--)
		{ if (dp[n][i]) 
			{ cout << i << endl;
			break ;

		}
} }
