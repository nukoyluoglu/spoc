#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long i, j, k, n;
	cin >> n;
	for (i = 1, j = 3; i <= 35; i++, j *= 3) 
		{ if (n % j != 0) break;
	}
	cout << n / j + 1 << "\n" ;

}
