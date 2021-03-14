#include <bits/stdc++.h>

using namespace std;

int main() 
	{ double l, x, y;
	cin >> l;
	cin >> x >> y;
	if (y > x) 
		{ cout << l - ((l / (x + y)) * max(x, y)) << endl;
	}  else 
		{ cout << ( ( l / ( x + y ) ) * max_element ( x, y ) << endl ;

	}
	return 0;
}
