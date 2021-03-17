#include <bits/stdc++.h>

using namespace std;

bool search(int ax, int ay, int bx, int by, int cx, int cy) 
	{ if (bx < ax && cx < ax && by < ay && cy < ay)
		{ return true;
	} else if (bx < ax && cx < ax && by > ay && cy > ay)
		{ return true;
	} else if (bx > ax && cx > ax && by < ay && cy < ay)
		{ return true;
	} else if (bx > ax && cx > ax && by > ay && cy > ay)
		{ return true;
	} return false;
}
int main() 
	{ int n, ax, ay, bx, by, cx, cy;
	cin >> n >> ax >> ay >> bx >> by >> cx >> cy;
	if (search(ax, ay, bx, by, cx, cy))
		{ cout << "YES" << endl;
	} else
		{ cout << "NO" << endl ;

	} return 0;
}
