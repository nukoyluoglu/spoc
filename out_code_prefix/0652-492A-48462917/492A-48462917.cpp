#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	int a = 0, c = 0, b = 0, i;
	for (int i = 1; i <= n; i++) 
		{ b = (i * (i + 1)) / 2;
		a += b;
		if (a > n) break;
		c++;
	}
	cout << c << endl ;

	return 0;
}
