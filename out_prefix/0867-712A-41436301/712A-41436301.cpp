#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, a[100001], r, s, b[100001], i, j = 0;
	cin >> n;
	for (i = 1; i <= n; i++) cin >> a[i];
	j++;
	b[j] = a[n];
	for (i = n; i > 1; i--) 
		{ r = a[i] + a[i - 1];
		j++;
		b[j] = r;
	}
	for (i = j; i > 0; i--) 
		{ cout << b[i];
		if (i != 1) cout << " ";
	}
	<< "\n" ;

	return 0;
}
