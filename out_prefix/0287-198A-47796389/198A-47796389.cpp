#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long k, b, n, t;
	cin >> k >> b >> n >> t;
	long long cnt = 1;
	while (cnt <= t) 
		{ cnt = cnt * k + b;
		n--;
	}
	cout << max ( 0LL, n + 1 ) << endl ;

	return 0;
}
