#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int t;
	cin >> t;
	while (t--) 
		{ long int l, r;
		cin >> l >> r;
		if (l == 1)
			{ cout << l << " " << r << endl;
		} else 
			{ cout << l << " ";
			long int mod = (r % l);
			cout << r - mod << endl ;

		}
	}
	return 0;
}
