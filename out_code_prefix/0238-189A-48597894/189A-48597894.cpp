#include <bits/stdc++.h>

using namespace std;

int n, a, b, c;
int main() 
	{ cin >> n;
	int w[5];
	for (int i = 1; i <= 3; i++) cin >> w[i];
	int e[5000];
	memset(e, -40, sizeof(e));
	e[0] = 0;
	for (int i = 1; i <= 3; i++) 
		{ for (int j = w[i]; j <= n; j++) { e[j] = max(e[j - w[i]] + 1, e[j]); }
	}
	cout << e [ n ] << endl ;

}
