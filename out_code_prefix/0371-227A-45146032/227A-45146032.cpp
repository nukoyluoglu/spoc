#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long ax, ay, bx, by, cx, cy;
	cin >> ax >> ay >> bx >> by >> cx >> cy;
	long long ds = (bx * cy - by * cx) - (ax * cy - ay * cx) + (ax * by - ay * bx);
	if (ds == 0)
		{ cout << "TOWARDS";
	} else if (ds < 0)
		{ cout << "RIGHT";
	} else
		{ cout << "LEFT";
	} cout <<'\n';

}
