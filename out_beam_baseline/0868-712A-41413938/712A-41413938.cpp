#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	int k = 0, x;
	cin >> n;
	for (int i = 1; i <= n; i++) 
		{ cin >> x;
		if (i != 1) cout << x + k << " ";
		k = x;
	}
	cout << x << endl ;
	return 0;
}
