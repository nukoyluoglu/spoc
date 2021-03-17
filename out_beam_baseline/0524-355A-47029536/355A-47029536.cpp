#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int k, d, i, j;
	cin >> k >> d;
	if (d == 0) 
		{ if (k > 1)
			{ cout << "No solution" << endl;
		} else
			{ cout << 0 << endl;
		} return 0;
	}
	cout << d;
	for (i = 1; i < k; i++) cout << 0;
	cout << endl ;
}
