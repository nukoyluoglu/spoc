#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, i, j, k, max, cap;
	max = -1;
	cap = 0;
	cin >> n;
	for (i = 0; i < n; i++) 
		{ cin >> j >> k;
		cap = cap - j + k;
		if (cap > max) max = cap;
	}
	cout << max << endl ;
	return 0;
}
