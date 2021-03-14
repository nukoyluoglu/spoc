#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, m;
	cin >> n >> m;
	long long a = 3;
	int i = 1;
	int two = 0;
	while (n > 0) 
		{ if (n % 2 == 1) i = i * a % m;
		n = n / 2;
		a = (a * a) % m;
	}
	cout << ( i - 1 + m ) % m << endl ;

	return 0;
}
