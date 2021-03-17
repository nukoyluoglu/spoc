#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	int a[n], b[n];
	int cntr = 0, ans = 0;
	for (int i = 0; i < n; i++) 
		{ cin >> a[i] >> b[i];
		cntr -= a[i];
		cntr += b[i];
		ans = max(ans, cntr);
	}
	cout << ans << endl ;

}
