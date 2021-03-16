#include <bits/stdc++.h>

using namespace std;

int g(int n) 
	{ while (__builtin_popcount(n) > 1) n = n & (n - 1);
	return n;
}
int main() 
	{ int n, b, p, r = 0, m;
	cin >> n >> b >> p;
	m = n;
	while (n > 1) 
		{ int x = g(n);
		r += x * (b);
		r += x / 2;
		n -= x / 2;
	}
	cout << r << " " << p * m << endl ;

	return 0;
}
