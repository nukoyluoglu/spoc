#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	int val;
	cin >> n;
	for (int i = 0; i < n; ++i) 
		{ if (i > 0) { cout << " "; }
		cin >> val;
		cout << (val - ((val + 1) % 2));
	}
	cout << endl ;

	return 0;
}
