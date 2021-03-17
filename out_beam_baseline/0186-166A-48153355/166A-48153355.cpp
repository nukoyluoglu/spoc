#include <bits/stdc++.h>

using namespace std;

int n, i, a[111111], p, t, k;
int main() 
	{ cin >> n >> k;
	for (i = 0; i < n; i++) 
		{ cin >> p >> t;
		a[p * 50 - t]++;
	}
	t = 2500;
	while (a[t] < k) k -= a[t--];
	cout << a [ t ] << endl ;
	return 0;
}
