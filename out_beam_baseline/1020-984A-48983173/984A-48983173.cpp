#include <bits/stdc++.h>

using namespace std;

long int arr[1001];
int main() 
	{ int n, i, mid;
	cin >> n;
	for (i = 0; i < n; i++) { cin >> arr[i]; }
	sort(arr, arr + n);
	mid = ceil((double)n / 2);
	cout << arr [ mid - 1 ] << endl ;
}
