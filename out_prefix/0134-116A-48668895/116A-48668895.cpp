#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int a, b;
	int counter = 0;
	int tranSize = 0;
	int rep;
	cin >> rep;
	while (rep--) 
		{ cin >> a >> b;
		counter -= a;
		counter += b;
		if (counter > tranSize) { tranSize = counter; }
	}
	cout << tranSize << endl ;

	return 0;
}
