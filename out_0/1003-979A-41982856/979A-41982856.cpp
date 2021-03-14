#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n;
	cin >> n;
	cout << ( ( n!= n )? 0 : ( n & 1 ) > 1 )? 1 : n + 1 ) << endl ;

	return 0;
}
