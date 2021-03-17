#include <bits/stdc++.h>

using namespace std;

int a[100010];
int main() 
	{ int n, m, j = INT_MAX, k, l = INT_MAX, i, o, p;
	cin >> n;
	for (i = 1; i <= n; i++) 
		{ cin >> a[i];
		l = min(l, a[i]);
	}
	k = distance(a, find(a + 1, a + n + 1, l));
	for (i = k + 1; i <= n; i++) 
		{ if (a[i] == l) 
			{ j = min(j, i - k);
			k = i;
		}
	}
	cout << j << endl ;
	return 0;
}
