#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long int n, i, l, s = 0;
	cin >> n;
	for (l = 0;; l++) 
		{ s += l * (l + 1) / 2;
		if (s > n) { break; }
	}
	cout << l - 1 << endl ;

	return 0;
}
