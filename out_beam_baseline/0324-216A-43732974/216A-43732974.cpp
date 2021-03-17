#include <bits/stdc++.h>

using namespace std;

const int MAX = 5e4 + 5;
const long long MAX2 = 11;
const int MOD = 1000000000 + 7;
const long long INF = 20000;
const int dr[] = {1, 0, -1, 0, 1, 1, -1, -1};
const int dc[] = {0, 1, 0, -1, 1, -1, 1, -1};
const double pi = acos(-1);
int a, b, c;
int main() 
	{ cin >> a >> b >> c;
	cout << a * b + ( a + b - 1 ) * ( c - 1) << "\n" ;
	return 0;
}
