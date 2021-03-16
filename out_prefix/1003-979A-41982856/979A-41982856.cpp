#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n;
	cin >> n;
	cout << (! n? n : ( n + 1 ) >> 1? ( n ++ 1 ) : n + 2 ) << endl ;

	return 0;
}
