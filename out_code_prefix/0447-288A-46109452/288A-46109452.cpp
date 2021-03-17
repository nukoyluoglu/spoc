#include <bits/stdc++.h>

using namespace std;

int num[225];
int main() 
	{ int n, m, i, j, k;
	cin >> n >> k;
	num['a'] = k;
	for (i = 1; i < k; i++) num['a' + i]++;
	if (k > n)
		{ cout << -1 << endl;
	} else if (n == 1)
		{ cout << 'a' << endl;
	} else if (k == 1 && n > 1) 
		{ cout << -1 << endl;
	}  else 
		{ int f = 1;
		for (i = 1; i <= n - (k - 2); i++) 
			{ if (i % 2)
				{ cout << 'a';
			} else
				{ cout << 'b';
		} }
		for (i = 1; i <= k - 2; i++) { cout << (char)('b' + i); }
		cout << endl ;

	}
	return 0;
}
