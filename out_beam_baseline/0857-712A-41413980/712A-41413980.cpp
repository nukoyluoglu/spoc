#include <bits/stdc++.h>

using namespace std;

int n, z, a;
int main() 
	{ cin >> n;
	for (int i = 1; i <= n; i++) 
		{ cin >> a;
		if (i != 1) { cout << a + z << " "; }
		z = a;
	}
	cout << a << endl ;
	return 0;
}
