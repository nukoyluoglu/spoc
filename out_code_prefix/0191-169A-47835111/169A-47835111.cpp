#include <bits/stdc++.h>

using namespace std;

int arr[2005];
int main() 
	{ int a, b, c;
	cin >> a >> b >> c;
	for (int i = 0; i < a; i++) { cin >> arr[i]; }
	sort(arr, arr + a);
	int mn = arr[c - 1];
	int mx = arr[c] - 1;
	cout << max ( 0, mx - mn + 1 ) << endl ;

}
