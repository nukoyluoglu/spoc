#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n;
	cin >> n;
	if (n == 0) 
		{ cout << 0 << "\n";
		return 0;
	}
	if (n == 1) 
		{ cout << 1 << "\n";
		return 0;
	}
	if (n % 2 == 1)
		{ cout << (n + 1) / 2 << "\n";
	} else
		{ cout << n + 1 << "\n" ;
	} return 0;
}
