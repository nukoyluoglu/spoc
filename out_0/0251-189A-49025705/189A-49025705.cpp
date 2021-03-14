#include <bits/stdc++.h>

using namespace std;

int a, b, c;
int memo[4001];
int solve(int i) 
	{ if (i == 0) return 0;
	if (memo[i] != -1) return memo[i];
	int opt1 = -1e9, opt2 = -1e9, opt3 = -1e9;
	if (i >= a) { opt1 = solve(i - a) + 1; }
	if (i >= b) { opt2 = solve(i - b) + 1; }
	if (i >= c) { opt3 = solve(i - c) + 1; }
	return memo[i] = max(opt1, max(opt2, opt3));
}
int main() 
	{ memset(memo, -1, sizeof memo);
	int n;
	cin >> n >> a >> b >> c;
	cout << solve ( n ) << endl ;

	return 0;
}
