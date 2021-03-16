#include <bits/stdc++.h>

using namespace std;

const int MAX = 3e4 + 5;
const long long MAX2 = 11;
const int MOD = 1000000000 + 7;
const long long INF = 20000;
const int dr[] = {1, 0, -1, 0, 1, 1, -1, -1};
const int dc[] = {0, 1, 0, -1, 1, -1, 1, -1};
const double pi = acos(-1);
const double eps = 1e-9;
long long n, m;
long long pw() 
	{ long long ret = 1, x = 3;
	while (n) 
		{ if (n & 1) ret = (ret * x) % m;
		x = (x * x) % m;
		n >>= 1;
	}
	return ret;
}
int main() 
	{ cin >> n >> m;
	cout << ( pw ( ) + m - 1 ) % m << endl ;

	return 0;
}
