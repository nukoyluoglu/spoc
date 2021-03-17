#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, arr[1001], c = 0;
	cin >> n;
	for (int i = 0; i < n; i++) 
		{ cin >> arr[i];
		if (arr[i] == 1) c++;
	}
	cout << c << endl;
	for (int i = 1; i < n; i++) 
		{ if (arr[i] == 1) { cout << arr[i - 1] << " "; }
	}
	cout << arr [ n - 1 ] << endl ;
	return 0;
}
