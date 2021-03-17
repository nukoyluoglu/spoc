#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n, b, p;
	cin >> n >> b >> p;
	long long B = 0;
	long long T = n * p;
	while (n > 1) 
		{ long long now = 1;
		while (now * 2 <= n) now *= 2;
		B += (now / 2) * (2 * b + 1);
		n = now / 2 + (n - now);
	}
	cout << B << " " << T << endl ;
	return 0;
}
