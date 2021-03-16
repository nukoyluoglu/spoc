#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, ax, ay, bx, by, cx, cy;
	cin >> n >> ax >> ay >> bx >> by >> cx >> cy;
	if ((bx - ax) * (cx - ax) < 0 || (by - ay) * (cy - ay) < 0)
		{ cout << "NO" << endl;
	} else
		{ cout << "YES\n" ;

	} return 0;
}
