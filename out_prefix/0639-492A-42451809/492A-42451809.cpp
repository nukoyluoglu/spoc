#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, c = 0, d, count = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) 
		{ c += i;
		if (n >= c) count++;
		n -= c;
	}
	cout << count << endl ;

	return 0;
}
