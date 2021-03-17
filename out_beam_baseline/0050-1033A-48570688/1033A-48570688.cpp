#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	int x, y, x1, y1, x2, y2;
	cin >> x >> y >> x1 >> y1 >> x2 >> y2;
	int flag = 1;
	if (x1 == x || y1 == y || x2 == x || y2 == y) { flag = 0; }
	if (abs(x - x1) == abs(y - y1) || abs(x - x2) == abs(y - y2)) 
		{ flag = 0;
	}  else if (x1 < x && x2 > x) 
		{ flag = 0;
	}  else if (x1 > x && x2 < x) 
		{ flag = 0;
	}  else if (y1 < y && y2 > y) 
		{ flag = 0;
	}  else if (y1 > y && y2 < y) 
		{ flag = 0;
	}
	if (flag)
		{ cout << "YES" << endl;
	} else
		{ cout << "NO" << endl ;
} }
