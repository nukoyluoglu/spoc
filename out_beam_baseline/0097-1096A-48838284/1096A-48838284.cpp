#include <bits/stdc++.h>

using namespace std;

int T, l, r;
int main() 
	{ int i, j;
	cin >> T;
	for (i = 1; i <= T; i++) 
		{ cin >> l >> r;
		cout << l <<' '<< ( ( r / l ) * l ) <<'\n';
	}
	return 0;
}
