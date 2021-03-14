#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n, a, b, i;
	cin >> n >> a >> b;
	long long c[n];
	for (i = 0; i < n; i++) { cin >> c[i]; }
	sort(c, c + n);
	cout << c [ b ] - c [ n - 1 ] << endl ;

	return 0;
}
