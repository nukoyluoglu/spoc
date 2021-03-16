#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int a, b;
	cin >> a;
	if (a % 2 != 0)
		{ cout << -1 << endl;
	} else 
		{ for (b = 2; b <= a - 2; b += 2) cout << b << ' ' << b - 1 << ' ';
		cout << a <<' '<< a - 1 << endl ;

	}
	return 0;
}
