#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n;
	cin >> n;
	cout << (! n? 0 : ( n & 1 ) ) << " " << ( n + 1 ) >> 1? "NO\n" : "1" ;

	return 0;
}
