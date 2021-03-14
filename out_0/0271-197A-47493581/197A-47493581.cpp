#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int a, b, r;
	cin >> a >> b >> r;
	if (a >= b) 
		{ if (2 * r <= b)
			{ cout << "First\n";
		} else
			{ cout << "Second\n";
	} }  else 
		{ if (2 * r <= a)
			{ cout << "First\n";
		} else
			{ cout << "Second\n" ;

	} }
	return 0;
}
