#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, m;
	cin >> n >> m;
	int a[m];
	for (int i = 0; i < m; i++) cin >> a[i];
	sort(a, a + m);
	int min = 1000000;
	for (int i = 0; i < m - n + 1; i++) 
		{ if ((a[i + n - 1] - a[i]) < min) { min = a[i + n - 1] - a[i]; }
	}
	if (min == 1000000)
		{ cout << "0\n";
	} else
		{ cout << min << endl ;
} }
