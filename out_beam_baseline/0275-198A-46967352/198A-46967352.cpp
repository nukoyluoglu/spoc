#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long k, b, n, t;
	cin >> k >> b >> n >> t;
	long long z = k + b;
	int g = n;
	while (z < t && g > 0) 
		{ g--;
		z = z * k + b;
	}
	if (z == t) { g--; }
	cout << g << endl ;
}
