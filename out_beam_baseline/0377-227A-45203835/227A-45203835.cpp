#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	long long vx1 = x2 - x1, vy1 = y2 - y1, vx2 = x3 - x2, vy2 = y3 - y2;
	long long cha = vx1 * vy2 - vx2 * vy1;
	if (cha > 0) { cout << "LEFT" << endl; }
	if (cha < 0) { cout << "RIGHT" << endl; }
	if ( cha == 0 ) cout << "TOWARDS" << endl ;
	return 0;
}
