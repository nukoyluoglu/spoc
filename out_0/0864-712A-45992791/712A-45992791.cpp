#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, arr[100010];
	cin >> n;
	for (int i = 0; i < n; i++) { cin >> arr[i]; }
	for (int i = 1; i < n; i++) { cout << arr[i] + arr[i - 1] << " "; }
	cout << arr [ n - 1 ] << endl ;

	return 0;
}
