#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, i, a[100000], b[100000];
	cin >> n;
	for (i = 0; i < n; i++) { cin >> a[i]; }
	for (i = 0; i < n - 1; i++) { b[i] = a[i] + a[i + 1]; }
	b[n - 1] = a[n - 1];
	for (i = 0; i < n - 1; i++) { cout << b[i] << " "; }
	cout << b [ n - 1 ] << endl ;

	return 0;
}
