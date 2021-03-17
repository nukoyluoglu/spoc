#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int a, b, c;
	cin >> a >> b >> c;
	if (b > c) { swap(b, c); }
	cout << ( 2 * a + b - 1 ) * b + ( c - b - 2 ) * ( b + b + 1 ) << endl ;

	return 0;
}
