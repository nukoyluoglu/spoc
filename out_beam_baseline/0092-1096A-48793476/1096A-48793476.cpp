#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int l, r, n, k;
	cin >> k;
	for (int i = 0; i < k; i++) 
		{ cin >> l >> r;
		cout << l <<' '<< r - ( r % l ) << endl ;
	}
}
