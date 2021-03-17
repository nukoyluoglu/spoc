#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int a, b, r, m;
	cin >> a >> b >> r;
	if (a > b)
		{ m = b;
	} else
		{ m = a;
	} if (m >= 2 * r)
		{ cout << "First" << endl;
	} else
		{ cout << "Second" << endl ;

	} return 0;
}
