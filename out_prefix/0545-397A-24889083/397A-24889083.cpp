#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	int i;
	vector<int> x(n);
	vector<int> y(n);
	vector<int> z(101, 1);
	for (i = 0; i < n; i++) { cin >> x[i] >> y[i]; }
	int k;
	for (i = 1; i < n; i++) 
		{ for (k = x[i]; k < y[i]; k++) { z[k] = 0; }
	}
	int ct = 0;
	for (i = x[0]; i < y[0]; i++) 
		{ if (z[i] == 1) { ct++; }
	}
	cout << ct << endl ;

	return 0;
}
