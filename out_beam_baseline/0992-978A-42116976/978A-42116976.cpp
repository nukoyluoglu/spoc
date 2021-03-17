#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int a[50], b[50], v[1001] = {0}, n, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = n - 1; i >= 0; i--)
		{ if (!v[a[i]]) 
			{ v[a[i]] = 1;
			b[sum] = a[i];
			sum++;
		}
	} cout << sum << endl;
	for (int i = sum - 1; i > 0; i--) cout << b[i] << ' ';
	cout << b [ 0 ] << endl ;
	return 0;
}
