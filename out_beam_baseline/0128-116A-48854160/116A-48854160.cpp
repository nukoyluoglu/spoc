#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	int maxValue = INT_MIN;
	cin >> n;
	int a, b;
	int d = 0;
	int c = 0;
	for (int i = 0; i < n; i++) 
		{ cin >> a >> b;
		c = c + a;
		d = d + b;
		if (maxValue < abs(c - d)) maxValue = abs(c - d);
	}
	cout << maxValue << endl ;
	return 0;
}
