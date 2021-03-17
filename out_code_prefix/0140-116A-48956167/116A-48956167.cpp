#include <bits/stdc++.h>

using namespace std;

int s;
int main() 
	{ int x, a[10001], b[10001], maxs = 0;
	cin >> x;
	for (int i = 1; i <= x; i++) cin >> a[i] >> b[i];
	for (int i = 1; i <= x; i++) 
		{ s -= a[i];
		s += b[i];
		if (s > maxs) maxs = s;
	}
	cout << maxs << endl ;

	return 0;
}
