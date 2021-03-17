#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int i, n, k;
	while (cin >> n) 
		{ k = 0;
		for (i = 1; n >= 0; i++) 
			{ k += i;
			n -= k;
		}
		cout << i - 2 << endl ;
	}
}
