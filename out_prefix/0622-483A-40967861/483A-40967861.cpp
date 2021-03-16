#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long k, l;
	while (cin >> k >> l) 
		{ if (l - k < 2)
			{ cout << -1 << endl;
		} else if (!(k % 2)) 
			{ cout << k << " " << k + 1 << " " << k + 2 << endl;
		}  else if (k % 2 && l - k >= 3) 
			{ cout << k + 1 << " " << k + 2 << " " << k + 3 << endl;
		}  else
			{ cout << - 1 << endl ;

	} }
	return 0;
}
