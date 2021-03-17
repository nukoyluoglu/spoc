#include <bits/stdc++.h>

using namespace std;

int a[10000];
int main() 
	{ int n;
	cin >> n;
	for (int i = 1; i <= n; i++) { cin >> a[i]; }
	for (int i = 1; i <= n; i++) 
		{ if (a[i] % 2 == 0) a[i] -= 1;
		if (i == n)
			{ cout << a[i] << endl;
		} else
			{ cout << a [ i ] << " " ;
	} }
	return 0;
}
