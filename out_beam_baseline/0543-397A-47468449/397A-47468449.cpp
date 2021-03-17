#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int b, a, n, i, c, d, m, j;
	int v[110];
	while (cin >> n >> c >> d) 
		{ m = 0;
		for (i = 0; i < 101; i++) v[i] = 0;
		for (i = 0; i < n - 1; i++) 
			{ cin >> a >> b;
			for (j = a + 1; j <= b; j++) v[j] = -1;
		}
		for (i = c + 1; i <= d; i++)
			{ if (v[i] == 0) m++;
		} cout << m << endl ;
	}
	return 0;
}
