#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int a1, a2, a3, a4, a5, a6, result = 0;
	cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6;
	result = ((a1 + a2 + a3) * (a1 + a2 + a3)) - (a1 * a1) - (a3 * a3) - (a5 * a5);
	cout << result << endl ;

	return 0;
}
