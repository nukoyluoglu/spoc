#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, hh = -1, mm = -1, h, m, res = 0, k = 1;
	cin >> n;
	for (int i = 0; i < n; i++) 
		{ cin >> h >> m;
		if (h == hh && m == mm) 
			{ k++;
		}  else 
			{ hh = h;
			mm = m;
			res = res > k ? res : k;
			k = 1;
		}
	}
	cout << ( res > k? res : k ) << endl ;

	return 0;
}
