#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n, a;
	while (cin >> n) 
		{ a = 3;
		while (n % a == 0) a *= 3;
		cout << n / a + 1 << endl ;
	}
	return 0;
}
