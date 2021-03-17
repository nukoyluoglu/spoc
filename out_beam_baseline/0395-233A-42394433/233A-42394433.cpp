#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int p;
	cin >> p;
	if (p % 2 == 1)
		{ cout << "-1\n";
	} else 
		{ cout << "2 1";
		for (int i = 4; i <= p; i += 2) cout << " " << i << " " << i - 1;
		cout << endl ;
	}
	return 0;
}
