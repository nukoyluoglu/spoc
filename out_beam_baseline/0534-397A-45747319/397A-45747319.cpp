#include <bits/stdc++.h>

using namespace std;

int arrx[101];
int main() 
	{ int n;
	cin >> n;
	int l, r;
	cin >> l >> r;
	for (int i = 1; i < n; i++) 
		{ int a, b;
		cin >> a >> b;
		for (int j = a; j < b; j++) arrx[j] = 1;
	}
	int total = 0;
	for (int i = l; i < r; i++) { total += arrx[i] ? 0 : 1; }
	cout << total << endl ;
}
