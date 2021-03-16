#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) 
	{ if (b == 0)
		{ return a;
	} else
		{ gcd(b, a % b);
} }
int main() 
	{ long long int n;
	while (cin >> n) 
		{ n++;
		if (n == 1)
			{ cout << "0";
		} else if (n % 2 == 0)
			{ cout << n / 2;
		} else
			{ cout << n;
		} cout << endl ;

	}
}
