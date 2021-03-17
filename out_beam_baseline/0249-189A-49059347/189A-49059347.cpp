#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;
int arr[N];
int main() 
	{ int n, a, b, c;
	cin >> n >> a >> b >> c;
	memset(arr, (int)(0), sizeof(arr));
	arr[a] = arr[b] = arr[c] = 1;
	for (int i = (int)(1); i <= (int)(n); i++) 
		{ if (i >= a and arr[i - a]) arr[i] = max(arr[i], arr[i - a] + 1);
		if (i >= b and arr[i - b]) arr[i] = max(arr[i], arr[i - b] + 1);
		if (i >= c and arr[i - c]) arr[i] = max(arr[i], arr[i - c] + 1);
	}
	cout << arr [ n ] << endl ;
}
