#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, a[200], i;
	cin >> n;
	a[0] = 1;
	for (i = 1; i <= n - 1; i++) 
		{ a[i] = (a[i - 1] + i) % n;
		if (a[i] == 0) a[i] = n;
	}
	for (i = 1; i < n - 1; i++) { cout << a[i] << " "; }
	cout << a [ n - 1 ] << endl ;

	return 0;
}
