#include <bits/stdc++.h>

using namespace std;

int main() 
	{ double a = 0, b = 0, c = 0;
	cin >> a >> b >> c;
	if (b == c) 
		{ cout << 0.5 * a << endl;
		return 0;
	}
	cout << b / ( c + b ) * a << "\n" ;
}
