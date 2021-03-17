#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, k1, k2, i;
	cin >> n;
	cin >> k1;
	for (i = 1; i < n; i++) 
		{ cin >> k2;
		cout << k2 + k1 << " ";
		k1 = k2;
	}
	cout << k1 << endl ;
	return 0;
}
