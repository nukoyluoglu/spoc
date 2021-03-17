#include <bits/stdc++.h>

using namespace std;

int main() 
	{ double l, p, q;
	cin >> l >> p >> q;
	double t_total = 3 * l / (p + q);
	double t1 = l / (p + q);
	cout << ( t_total - 2 * t1 ) * p << endl ;

}
