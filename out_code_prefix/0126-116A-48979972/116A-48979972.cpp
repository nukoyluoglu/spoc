#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n, max = 0, d = 0;
	cin >> n;
	long long a[100000], b[100000];
	for (long long i = 0; i < n; i++) 
		{ cin >> a[i] >> b[i];
		d = d - a[i];
		d = d + b[i];
		if (d > max) max = d;
	}
	cout << max << endl ;

	return 0;
}
