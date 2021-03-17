#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int t;
	cin >> t;
	int l, r, d;
	while (t--) 
		{ cin >> l >> r;
		if (r % l == 0) 
			{ cout << l << " " << r << endl;
		}  else 
			{ d = r % l;
			d = r - d;
			cout << l << " " << d << endl ;
		}
	}
}
