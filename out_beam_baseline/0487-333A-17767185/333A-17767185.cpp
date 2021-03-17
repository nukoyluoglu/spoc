#include <bits/stdc++.h>

using namespace std;

FILE *stream;
int main() 
	{ long long n;
	cin >> n;
	long long x = 1;
	while (n % x == 0) { x *= 3; }
	cout << ( n / x ) + 1 << endl ;
}
