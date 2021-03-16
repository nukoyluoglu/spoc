#include <bits/stdc++.h>

using namespace std;

int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
int main() 
	{ long long int n;
	cin >> n;
	long long int x = 1, ans = 1;
	while (x < n) 
		{ if (n % x != 0) ans = max(ans, n / x + 1);
		x = x * 3;
	}
	cout << ans << "\n" ;

}
