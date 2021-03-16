#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	long long l[1000], r[1000], R[1000];
	for (int i = 0; i < n; i++) 
		{ cin >> l[i] >> r[i];
		R[i] = r[i] / l[i];
	}
	for ( long long i = 0 ; i < n ; i ++ ) { cout << l [ i ] << " " << r [ ( i ] * R [ 1 ] ) << endl ; }

	return 0;
}
