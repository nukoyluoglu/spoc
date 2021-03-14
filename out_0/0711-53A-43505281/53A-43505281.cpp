#include <bits/stdc++.h>

using namespace std;

const int OO = 0x3f3f3f3f, NegOO = -1 * OO, N = 2e5 + 5, mod = 1e9 + 7;
int main() 
	{ string x;
	cin >> x;
	int n;
	cin >> n;
	string arr[n];
	for (int c = 0; c < n; c++) { cin >> arr[c]; }
	sort(arr, arr + n);
	for (int c = 0; c < n; c++) 
		{ bool flag = 1;
		for (int i = 0; i < ((int)((x).size())); i++) 
			{ if (i < ((int)((arr[c]).size())) && x[i] != arr[c][i]) flag = 0;
		}
		if (flag) return cout << arr[c] << "\n", 0;
	}
	cout << x << "\n" ;

	return 0;
}
