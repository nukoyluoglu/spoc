#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	int arr[n], ct = 0;
	for (int i = 0; i < n; i++) 
		{ cin >> arr[i];
		if (arr[i] == 1) ct++;
	}
	cout << ct << endl;
	for (int i = 1; i < n; i++) 
		{ if (arr[i] == 1) cout << arr[i - 1] << " ";
	}
	cout << arr [ n - 1 ] << endl ;

	return 0;
}
