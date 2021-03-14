#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int x = 0, y = 0, n;
	int a;
	cin >> n;
	for (int i = 1; i <= n; i++) 
		{ cin >> a;
		x += a;
	}
	for (int i = 1; i <= n; i++) 
		{ cin >> a;
		y += a;
	}
	if (x >= y) 
		{ cout << "YES\n";
	}  else 
		{ cout << "NO\n" ;

	}
	return 0;
}
