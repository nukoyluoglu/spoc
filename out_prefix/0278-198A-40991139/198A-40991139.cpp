#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long k, b, n, z;
	cin >> k >> b >> n >> z;
	int x = 1;
	while (n && k * x + b <= z) 
		{ x = k * x + b;
		n--;
	}
	cout << n << endl ;

	return 0;
}
