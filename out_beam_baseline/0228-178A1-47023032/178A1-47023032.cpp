#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long int n;
	cin >> n;
	long long int a[n + 5];
	for (int i = 1; i <= n; i++) cin >> a[i];
	long long int c = 0;
	for (int i = 1; i < n; i++) 
		{ c += a[i];
		cout << c << "\n";
		long long int j = 1;
		while ((i - 1) + j * 2 < n) j *= 2;
		a [ i + j ] += a [ i ] ;
	}
}
