#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, my[105] = {0}, l, r, a, b, sum = 0;
	cin >> n;
	cin >> l >> r;
	for (int i = 0; i < n - 1; i++) 
		{ cin >> a >> b;
		for (int j = a + 1; j <= b; j++) my[j] = 1;
	}
	for (int i = l + 1; i <= r; i++)
		{ if (my[i] == 0) sum++;
	} cout << sum << endl ;

	return 0;
}
