#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, r = 0, t = 0;
	cin >> n;
	for (int i = 0; i < n; i++) 
		{ int a, b;
		cin >> a >> b;
		t = t - a + b;
		if (t > r) r = t;
	}
	cout << r << endl ;

	return 0;
}
