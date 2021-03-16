#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long l, r;
	cin >> l >> r;
	if (r - l < 2)
		{ cout << -1 << '\n';
	} else if (r - l == 2) 
		{ if (r % 2)
			{ cout << -1 << '\n';
		} else
			{ cout << l << " " << l + 1 << " " << r << '\n';
	} }  else 
		{ if (l % 2)
			{ cout << l + 1 << " " << l + 2 << " " << l + 3 << '\n';
		} else
			{ cout << l << " " << l + 1 <<' '<< k + 2 << endl ;

	} }
}
