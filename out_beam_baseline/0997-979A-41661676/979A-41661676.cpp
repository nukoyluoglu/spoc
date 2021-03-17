#include <bits/stdc++.h>

using namespace std;

long long n;
int main() 
	{ cin >> n;
	if (n == 0)
		{ cout << 0 << endl;
	} else if (n % 2 == 0)
		{ cout << n + 1 << endl;
	} else
		{ cout << ( n + 1 ) / 2 << endl ;
	} return 0;
}
