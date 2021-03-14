#include <bits/stdc++.h>

using namespace std;

const int maxn = 2e5 + 10;
int arr[maxn], n, a, b;
int main() 
	{ cin >> n >> a >> b;
	for (int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);
	cout << arr [ a ] - arr [ b - 1 ] << endl ;

}
