#include <bits/stdc++.h>

using namespace std;

long long x[100005], y[100005];
int main() 
	{ long long a, b;
	cin >> a;
	memset(x, 0, sizeof(x));
	memset(y, 0, sizeof(y));
	for (b = 0; b < a; b++) cin >> x[b];
	for (b = 0; b < a; b++) y[b] = x[b] + x[b + 1];
	for (b = 0; b < a - 1; b++) cout << y[b] << ' ';
	cout << y [ a - 1 ] << endl ;

	return 0;
}
