#include <bits/stdc++.h>

using namespace std;

long long cil(long long x, long long y) 
	{ if (x % y == 0)
		{ return x / y;
	} else
		{ return x / y + 1;
} }
int main() 
	{ long long n, i, j = 0;
	cin >> n;
	i = n;
	while (n % 3 == 0 && n > 0) 
		{ j++;
		n /= 3;
	}
	long long l = pow(3, j + 1);
	cout << ceil ( i, l ) << endl ;

}
