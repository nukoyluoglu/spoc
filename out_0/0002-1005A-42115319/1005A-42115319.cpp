#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	while (cin >> n) 
		{ int a[n];
		int b[n];
		int max;
		int count = 0;
		for (int i = 0; i < n; i++) { cin >> a[i]; }
		max = a[0];
		for (int q = 1; q < n; q++) 
			{ if (a[q] == 1) { b[++count] = a[q - 1]; }
		}
		cout << count + 1 << endl;
		for (int j = 1; j <= count; j++) cout << b[j] << " ";
		cout << a [ n - 1 ] << endl ;

	}
	return 0;
}
