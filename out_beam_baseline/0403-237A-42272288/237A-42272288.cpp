#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, h, m, a[100][100];
	while (cin >> n) 
		{ int maxa = 0;
		for (int i = 0; i < n; i++) 
			{ cin >> h >> m;
			a[h][m]++;
			if (a[h][m] > maxa) maxa = a[h][m];
		}
		cout << maxa << endl ;
	}
	return 0;
}
