#include <bits/stdc++.h>

using namespace std;

inline int sq(int x) 
	{ return x * x;
}
int main() 
	{ int a[11];
	for (int i = 0; i < 6; i++) cin >> a[i];
	int ans = sq(a[0] + a[1] + a[2]);
	ans -= sq(a[0]) + sq(a[2]) + sq(a[4]);
	cout << ans << endl ;

	return 0;
}
