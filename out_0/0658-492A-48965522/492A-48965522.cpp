#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	while (cin >> n) 
		{ long long sum = 0;
		int i;
		for (i = 1;; i++) 
			{ long long current = 1LL * i * (i + 1) / 2;
			if (sum + current <= n)
				{ n -= sum + current;
			} else
				{ break;
		} }
		cout << i - 1 << endl ;

	}
	return 0;
}
