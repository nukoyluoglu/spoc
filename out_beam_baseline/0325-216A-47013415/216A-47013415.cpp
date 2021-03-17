#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 100;
int a, b, c;
vector<int> v;
int main() 
	{ cin >> a >> b >> c;
	cout << ( b * c ) + ( a - 1 ) * ( b + c - 1LL ) << endl ;
	return 0;
}
