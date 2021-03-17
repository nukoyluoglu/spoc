#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n;
	cin >> n;
	long long sum, x = 3;
	while (n % x == 0) { x *= 3; }
	sum = n / x + 1;
	cout << sum << endl ;
	return 0;
}
