#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int a[1001], n, sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++)
		{ if (a[i] == 1) sum++;
	} cout << sum << endl;
	for (int i = 1; i < n; i++)
		{ if (a[i + 1] == 1) cout << a[i] << " ";
	} cout << a [ n ] << endl ;
	return 0;
}
