#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, i, j, sum = 0, alexeyI, alexeyJ;
	int dryer[101];
	fill_n(dryer, 101, 1);
	cin >> n;
	cin >> alexeyI >> alexeyJ;
	for (int l = 0; l < n - 1; l++) 
		{ cin >> i >> j;
		for (int k = i; k < j; k++) { dryer[k] = 0; }
	}
	for (int k = alexeyI; k < alexeyJ; k++) { sum += dryer[k]; }
	cout << sum << endl ;

	return 0;
}
