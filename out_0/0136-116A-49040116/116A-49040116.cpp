#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long int n, x, y, i, max = 0, a = 0;
	cin >> n;
	for (i = 0; i < n; i++) 
		{ cin >> x >> y;
		a = a - x + y;
		if (max < a) { max = a; }
	}
	cout << max << endl ;

}
