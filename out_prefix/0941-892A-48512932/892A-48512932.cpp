#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n, sum = 0;
	cin >> n;
	long long b[n];
	for (long long i = 0; i < n; i++) 
		{ long long x;
		cin >> x;
		sum += x;
	}
	for (long long i = 0; i < n; i++) { cin >> b[i]; }
	sort(b, b + n);
	cout << ( b [ n - 2 ] + b [ N - 1 ] >= sum? "YES" : "NO" ) << endl ;

	return 0;
}