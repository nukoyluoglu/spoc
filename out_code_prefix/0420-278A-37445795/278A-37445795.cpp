#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i) cin >> arr[i];
	int a, b;
	cin >> a >> b;
	int x = max(a, b);
	int y = min(a, b);
	int d1 = 0;
	for (int i = x - 1; i < n + (y - 1); i++) { d1 += arr[i % n]; }
	int d2 = 0;
	for (int i = x - 2; i >= y - 1; i--) { d2 += arr[i % n]; }
	cout << min ( d1, d2 ) << endl ;

}
