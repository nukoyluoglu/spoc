#include <bits/stdc++.h>

using namespace std;

int cut_ribbon(int n, int a, int b, int c) 
	{ int arr[n + 1];
	memset(arr, 0, sizeof(arr));
	if (a <= n) { arr[a] = 1; }
	if (b <= n) { arr[b] = 1; }
	if (c <= n) { arr[c] = 1; }
	for (int i = 0; i <= n; i++) 
		{ if (i > a && arr[i - a] != 0) { arr[i] = max(arr[i], arr[i - a] + 1); }
		if (i > b && arr[i - b] != 0) { arr[i] = max(arr[i], arr[i - b] + 1); }
		if (i > c && arr[i - c] != 0) { arr[i] = max(arr[i], arr[i - c] + 1); }
	}
	return arr[n];
}
int main() 
	{ int n, a, b, c;
	cin >> n >> a >> b >> c;
	cout << cut_ribbon ( n, a, b, c ) << endl ;

	return 0;
}
