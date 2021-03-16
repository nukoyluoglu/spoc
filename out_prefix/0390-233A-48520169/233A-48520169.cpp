#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int t, i;
	cin >> t;
	if (t % 2 == 1) 
		{ cout << -1 << endl;
	}  else 
		{ cout << "2 1";
		for (i = 3; i < t; i += 2) { cout << " " << i + 1 << " " << i; }
		cout << endl ;

	}
	return 0;
}
