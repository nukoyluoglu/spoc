#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, m = 2;
	cin >> n;
	cout << m;
	for (int i = 1; i < n - 1; i++) 
		{ m += (i + 1);
		if (m % n == 0)
			{ cout << " " << n;
		} else
			{ cout << " " << m % n;
	} }
	cout << endl ;
	return 0;
}
