#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, a = 0, b = 0;
	cin >> n;
	for (int i = 1; a < n; i++) 
		{ a += i;
		n -= a;
		if (n >= 0) b++;
	}
	cout << b << endl ;
}
