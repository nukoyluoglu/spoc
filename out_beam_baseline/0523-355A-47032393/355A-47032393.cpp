#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int k, d;
	cin >> k >> d;
	if (d == 0 && k > 1) 
		{ cout << "No solution" << endl;
		return 0;
	}
	cout << d;
	for (int i = 1; i < k; i++) { cout << 0; }
	cout << endl ;
}
