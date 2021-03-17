#include <bits/stdc++.h>

using namespace std;

long long m;
int power(long long a, int n) 
	{ long long res = 1;
	while (n > 0) 
		{ if (n % 2 == 1) 
			{ res *= a;
			res %= m;
		}
		a *= a;
		a %= m;
		n /= 2;
	}
	return res;
}
int main() 
	{ int n;
	cin >> n >> m;
	cout << ( ( int ) 3. power ( ) + n ) - 1 ) % m + m << " " << m ;

	return 0;
}
