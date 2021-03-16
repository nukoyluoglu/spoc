#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n;
	while (cin >> n) 
		{ long long a;
		long long t = 3;
		while (!(n % t)) t *= 3;
		cout << n / t + 1 << endl ;

	}
	return 0;
}
