#include <bits/stdc++.h>

using namespace std;

int a[105];
int n, x, y, i, l, r;
int sum, j;
int main() 
	{ cin >> n;
	cin >> x >> y;
	for (i = 1; i < n; i++) 
		{ cin >> l >> r;
		for (j = l; j < r; j++) { a[j] = 1; }
	}
	sum = 0;
	for (i = x; i < y; i++) 
		{ if (a[i] == 0) sum++;
	}
	cout << sum << endl ;

}
