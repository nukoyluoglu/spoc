#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int a, b, c;
	cin >> a >> b >> c;
	cout << int ( a * b ) + ( b * c ) + int ( c * a ) - a - b - c + 1 << endl ;
	return 0;
}
