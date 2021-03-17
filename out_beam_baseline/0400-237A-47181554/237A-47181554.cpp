#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, i, j;
	int h[100000], m[100000], count[100000];
	cin >> n;
	for (i = 0; i < n; i++) { cin >> h[i] >> m[i]; }
	for (i = 0; i < n; i++) count[i] = 1;
	for (i = 0, j = 0; i < n - 1; i++) 
		{ if (h[i] == h[i + 1] && m[i] == m[i + 1]) 
			{ count[j]++;
		}  else if (count[j] != 1)
			{ j++;
	} }
	int ans = count[0];
	for (i = 0; i < n; i++) 
		{ if (count[i] > ans) ans = count[i];
	}
	cout << ans << endl ;
	return 0;
}
