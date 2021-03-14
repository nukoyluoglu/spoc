#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n, k, p;
	cin >> n >> k >> p;
	long long pe[1001], ke[2002];
	for (int a = 0; a < n; a++) cin >> pe[a];
	for (int a = 0; a < k; a++) cin >> ke[a];
	sort(pe, pe + n);
	sort(ke, ke + k);
	long long mins = 99999999999999;
	for (int a = 0; a < k - n + 1; a++) 
		{ long long tmp = 0;
		for (int b = 0; b < n; b++) tmp = max(tmp, abs(pe[b] - ke[a + b]) + abs(ke[a + b] - p));
		mins = min(tmp, mins);
	}
	cout << mins << endl ;

	return 0;
}
