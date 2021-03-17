#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long xa, ya, xb, yb, xc, yc;
	cin >> xa >> ya >> xb >> yb >> xc >> yc;
	long long cp = (xb - xa) * (yc - ya) - (yb - ya) * (xc - xa);
	if (cp > 0)
		{ cout << "LEFT\n";
	} else if (cp < 0)
		{ cout << "RIGHT\n";
	} else
		{ cout << "TOWARDS\n" ;
	} return 0;
}
