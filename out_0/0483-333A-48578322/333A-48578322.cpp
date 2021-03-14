#include <bits/stdc++.h>

using namespace std;

long long n, ans = 0;
int main() 
	{ cin >> n;
	while (n % 3 == 0) n /= 3;
	ans = n / 3 + 1;
	cout << ans << endl ;

	return 0;
}
