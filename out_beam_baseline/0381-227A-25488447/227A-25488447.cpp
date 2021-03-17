#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	if ((y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1)) 
		{ cout << "TOWARDS" << endl;
	}  else if (y1 == y2) 
		{ if (x2 > x1) 
			{ if (y3 > y2)
				{ cout << "LEFT" << endl;
			} else
				{ cout << "RIGHT" << endl;
		} }  else 
			{ if (y3 < y2)
				{ cout << "LEFT" << endl;
			} else
				{ cout << "RIGHT" << endl;
		} }
	}  else if (x1 == x2) 
		{ if (y1 < y2) 
			{ if (x3 > x2)
				{ cout << "RIGHT" << endl;
			} else
				{ cout << "LEFT" << endl;
		} }  else 
			{ if (x3 < x2)
				{ cout << "RIGHT" << endl;
			} else
				{ cout << "LEFT" << endl;
		} }
	}  else if (x1 < x2 && y1 < y2) 
		{ if (x3 < x2)
			{ cout << "LEFT" << endl;
		} else
			{ cout << "RIGHT" << endl;
	} }  else if (x1 > x2 && y1 > y2) 
		{ if (x3 > x2)
			{ cout << "LEFT" << endl;
		} else
			{ cout << "RIGHT" << endl;
	} }  else if (x1 < x2 && y1 > y2) 
		{ if (x3 > x2)
			{ cout << "LEFT" << endl;
		} else
			{ cout << "RIGHT" << endl;
	} }  else 
		{ if (x3 < x2)
			{ cout << "LEFT" << endl;
		} else
			{ cout << "RIGHT" << endl ;
	} }
	return 0;
}
