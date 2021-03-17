#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long int x1, x2, x3, y1, y2, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	if ((y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1)) 
		{ cout << "TOWARDS" << endl;
	}  else if ((x3 - x2) * (y2 - y1) - (x2 - x1) * (y3 - y2) > 0) 
		{ cout << "RIGHT" << endl;
	}  else 
		{ cout << "LEFT" << endl ;
	}
	return 0;
}
