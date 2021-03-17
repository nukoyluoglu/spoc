#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, b, p;
	cin >> n >> b >> p;
	int ats1 = 0, ats2 = p * n;
	while (n != 1) 
		{ int k = 1;
		while (2 * k <= n) k *= 2;
		ats1 += k * b + k / 2;
		n -= k / 2;
	}
	cout << ( ats1 ) << " " << ats2 << endl ;

}
