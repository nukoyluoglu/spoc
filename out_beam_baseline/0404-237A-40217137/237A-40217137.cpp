#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, i;
	cin >> n;
	int a[n + 2], b[n + 2];
	int m = 0;
	int c[24][60] = {0};
	for (i = 0; i < n; i++) 
		{ cin >> a[i] >> b[i];
		c[a[i]][b[i]]++;
	}
	for (i = 0; i < n; i++) { m = max(m, c[a[i]][b[i]]); }
	cout << m << "\n" ;
	return 0;
}
