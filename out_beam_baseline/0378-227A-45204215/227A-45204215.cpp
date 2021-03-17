#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int f = 0;
	long long x1, x2, x3, y1, y2, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	long long temp = (x2 - x1) * (y3 - y2) - (y2 - y1) * (x3 - x2);
	if (temp == 0)
		{ f = 0;
	} else if (temp > 0)
		{ f = 1;
	} else
		{ f = 2;
	} if (f == 0)
		{ puts("TOWARDS");
	} else if (f == 2)
		{ puts("RIGHT");
	} else
		{ cout << "LEFT" << endl ;
	} return 0;
}
