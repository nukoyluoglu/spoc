#include <bits/stdc++.h>

using namespace std;

long long pow(long long a, long long b, long long m) 
	{ long long res = 1;
	while (b) 
		{ if (b & 1) { res = (res * a) % m; }
		a = (a * a) % m;
		b >>= 1;
	}
	return res;
}
int main() 
	{ long long n, m;
	cin >> n >> m;
	cout << ( pow ( 3, n, m ) - 1 + m ) % m << endl ;
	return 0;
}
