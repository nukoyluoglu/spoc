#include <bits/stdc++.h>

using namespace std;

int n, k;
int main() 
	{ cin >> n >> k;
	if (k > n) 
		{ cout << -1 << endl;
		return 0;
	}
	if (k == 1) 
		{ if (n == 1)
			{ cout << 'a' << endl;
		} else
			{ cout << -1 << endl;
		} return 0;
	}
	if (k == 2) 
		{ for (int i = 0; i < n; i++) { cout << char('a' + (i & 1)); }
		cout << endl;
		return 0;
	}
	for (int i = 0; i < n - k + 2; i++) { cout << char('a' + (i & 1)); }
	for (int i = 0; i < k - 2; i++) { cout << char('c' + i); }
	cout << endl ;
}
