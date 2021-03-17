#include <bits/stdc++.h>

using namespace std;

int n;
int main() 
	{ cin >> n;
	int a[n + 10];
	for (int i = 0; i < n; i++) 
		{ cin >> a[i];
		if (a[i] % 2 == 0) { a[i] -= 1; }
	}
	for (int j = 0; j < n - 1; j++) { cout << a[j] << " "; }
	cout << a [ n - 1 ] << endl ;
	return 0;
}
