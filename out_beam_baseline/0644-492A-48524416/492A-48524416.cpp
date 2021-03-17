#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	int tot = 0, ans = 0;
	for (int i = 1; i <= n; i += 1) 
		{ tot += i * (i + 1) / 2;
		if (tot > n) break;
		ans = i;
	}
	cout << ans << endl ;
	return 0;
}
