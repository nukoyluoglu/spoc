#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	int a[n + 1], i, j, k = 0;
	for (i = 0; i < n; i++) 
		{ cin >> a[i];
		if (a[i] == 1) k++;
	}
	cout << k << endl;
	for (i = 1; i < n; i++) 
		{ if (a[i] == 1) cout << a[i - 1] << " ";
	}
	cout << a [ n - 1 ] << endl ;
}
