#include <bits/stdc++.h>

using namespace std;

int k, d;
int main() 
	{ cin >> k >> d;
	if (d == 0 && k > 1) 
		{ cout << "No solution" << endl;
		return 0;
	}
	cout << d;
	k--;
	while (k--) cout << 0;
	<< "\n" ;

	return 0;
}
