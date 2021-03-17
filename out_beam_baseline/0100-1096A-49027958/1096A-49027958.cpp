#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n, m;
	cin >> n;
	long long l, r;
	while (n--) 
		{ cin >> l >> r;
		if (r % l == 0) 
			{ cout << l << " " << r << endl;
		}  else 
			{ cout << l << " " << r - ( r % l ) << endl ;
		}
	}
}
