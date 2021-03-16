#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n, m;
	cin >> n >> m;
	if (m - n < 2)
		{ cout << -1 << endl;
	} else 
		{ if (n % 2 == 0)
			{ cout << n << " " << n + 1 << " " << n + 2 << endl;
		} else if (n % 2 != 0 && n + 3 <= m)
			{ cout << n + 1 << " " << n + 2 << " " << n + 3 << endl;
		} else
			{ cout << - 1 << endl ;

	} }
}
