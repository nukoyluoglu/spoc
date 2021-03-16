#include <bits/stdc++.h>

using namespace std;

char a[60], b[60];
int main() 
	{ int n;
	while (cin >> n) 
		{ memset(b, 0, sizeof(b));
		for (int i = 1; i <= n; i++) { cin >> a[i]; }
		int k = 0, d = 0;
		for (int i = 1; i <= n; i = i + k) 
			{ b[d] = a[i];
			d++;
			k++;
		}
		cout << b << endl ;

	}
}
