#include <bits/stdc++.h>

using namespace std;

int water;
int s, n, b, p;
int main() 
	{ cin >> n >> b >> p;
	int k = n;
	water = 0;
	while (n != 1) 
		{ s = n / 2;
		if (n % 2 == 0) 
			{ n /= 2;
		}  else 
			{ n = n / 2 + 1;
		}
		water += s * (2 * b + 1);
	}
	cout << water << " " << k * p << endl ;

}
