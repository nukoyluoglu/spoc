#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int t, a, b, h = 0, p = 0;
	cin >> t;
	while (t--) 
		{ cin >> a >> b;
		if (a != b) p++;
	}
	if (p != 0)
		{ cout << "Happy Alex" << endl;
	} else
		{ cout << "Poor Alex" << endl ;
	} return 0;
}
