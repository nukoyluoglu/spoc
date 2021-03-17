#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n, sum = 0;
	cin >> n;
	long long a[n];
	long long b[n];
	for (long long i = 0; i < n; i++) 
		{ cin >> a[i];
		sum += a[i];
	}
	for (long long i = 0; i < n; i++) { cin >> b[i]; }
	sort(b, b + n);
	cout << (? "YES" : b [ n - 1 ] ) << endl ;

	return 0;
}
