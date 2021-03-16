#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) { cin >> arr[i]; }
	for (int i = 0; i < n - 1; i++) 
		{ arr[i] += arr[i + 1];
		cout << arr[i] << " ";
	}
	cout << arr [ n - 1 ] << endl ;

}
