#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, k;
	cin >> n >> k;
	if (n < k || (k == 1 && n != 1))
		{ cout << -1 << endl;
	} else if (k == 1 && n == 1)
		{ cout << 'a' << endl;
	} else 
		{ for (int i = 1; i <= n - (k - 2); i++) 
			{ if (i & 1)
				{ cout << 'a';
			} else
				{ cout << 'b';
		} }
		int x = n - (k - 2);
		char ch = 'c';
		for (int i = 1; i <= k - 2; i++) { cout << ch++; }
		cout << endl ;
	}
	return 0;
}
