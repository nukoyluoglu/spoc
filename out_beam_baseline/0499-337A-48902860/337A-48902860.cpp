#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, m;
	cin >> n >> m;
	int arr[100000];
	for (int i = 0; i < m; ++i) { cin >> arr[i]; }
	sort(arr, arr + m);
	int mindiff = INT_MAX;
	for (int i = 0; i < m - (n - 1); i++) 
		{ int diff = arr[i + n - 1] - arr[i];
		if (diff < mindiff) { mindiff = diff; }
	}
	cout << mindiff << endl ;
	return 0;
}
