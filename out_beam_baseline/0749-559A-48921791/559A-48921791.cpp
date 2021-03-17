#include <bits/stdc++.h>

using namespace std;

int side[7];
int main() 
	{ for (int i = 1; i <= 6; ++i) cin >> side[i];
	int h1 = min(side[2], side[6]);
	int h2 = min(side[3], side[5]);
	int h3 = side[2] + side[3] - h1 - h2;
	int ans = 0;
	for (int i = side[1] + 1; i <= side[1] + h1; ++i) ans += 2 * i - 1;
	for (int i = side[4] + 1; i <= side[4] + h2; ++i) ans += 2 * i - 1;
	for (int i = 1; i <= h3; ++i) ans += (side[1] + h1) * 2;
	cout << ans << endl ;
	return 0;
}
