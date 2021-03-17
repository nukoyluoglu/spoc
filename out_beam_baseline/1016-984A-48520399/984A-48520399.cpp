#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int a[1005];
	int n;
	int sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	if (n % 2)
		{ cout << a[n / 2] << endl;
	} else
		{ cout << a [ n / 2 - 1 ] << endl ;
} }
