#include <bits/stdc++.h>

using namespace std;

long int perm[2 * 100000 + 5];
int main() 
	{ long int n, x, cycle = 0, v, k, xo = 1;
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> perm[i];
	for (int i = 0; i < n; i++) 
		{ cin >> x;
		xo ^= x;
	}
	for (int i = 1; i <= n; i++) 
		{ if (!perm[i]) continue;
		cycle++;
		v = i;
		while (perm[v]) 
			{ k = perm[v];
			perm[v] = 0;
			v = k;
		}
	}
	if (cycle == 1) cycle = 0;
	cout << cycle + xo << endl ;

	return 0;
}
