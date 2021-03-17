#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int k, d;
	cin >> k >> d;
	if (k > 1 && d == 0) 
		{ cout << "No solution\n";
		return 0;
	}
	cout << d;
	for (int i = 1; i < k; i++) { cout << 0; }
	cout << endl ;
}
