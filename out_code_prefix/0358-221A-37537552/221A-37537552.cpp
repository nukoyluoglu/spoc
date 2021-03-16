#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int a;
	cin >> a;
	cout << a;
	if (a > 1) cout << " ";
	for (int i = 0; i < a - 1; i++) 
		{ cout << i + 1;
		if (i + 2 != a) cout << " ";
	}
	cout << endl ;

	return 0;
}
