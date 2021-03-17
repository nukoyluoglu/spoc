#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, m, a, b;
	cin >> n >> m >> a >> b;
	if (m * a > b) 
		{ cout << min((n / m) * b + (n % m) * a, ((n / m) + 1) * b) << endl;
		return 0;
	}
	cout << min ( n * a, ( ( n / m ) + 1 ) * b ) << endl ;
	return 0;
}
