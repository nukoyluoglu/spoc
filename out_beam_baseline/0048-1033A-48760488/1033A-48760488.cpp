#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	int x1, y1;
	cin >> x1 >> y1;
	int x2, y2;
	cin >> x2 >> y2;
	int x3, y3;
	cin >> x3 >> y3;
	if (x2 < x1 && y2 < y1 && x3 < x1 && y3 < y1)
		{ cout << "YES" << endl;
	} else if (x2 > x1 && y2 > y1 && x3 > x1 && y3 > y1)
		{ cout << "YES" << endl;
	} else if (x2 > x1 && x3 > x1 && y3 < y1 && y2 < y1)
		{ cout << "YES" << endl;
	} else if (x2 < x1 && x3 < x1 && y2 > y1 && y3 > y1)
		{ cout << "YES" << endl;
	} else
		{ cout << "NO" << endl ;
} }
