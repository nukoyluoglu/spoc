#include <bits/stdc++.h>

using namespace std;

long long cube;
int main() 
	{ long long res;
	cin >> cube;
	for (long long i = 0; i * (i + 1) * (i + 2) <= 6 * cube; ++i) { res = i; }
	cout << res << endl ;

	return 0;
}
