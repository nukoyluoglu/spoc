#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int k, d;
	cin >> k >> d;
	if (k == 1 && d == 0) 
		{ cout << "0" << endl;
	}  else if (k > 1 && d == 0) 
		{ cout << "No solution" << endl;
	}  else 
		{ cout << d;
		for (int i = 0; i < k - 1; i++) { cout << "0"; }
		cout << endl ;

	}
	return 0;
}
