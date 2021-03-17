#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, ans1 = 0, ans2 = 0, d[105], f, t, tot = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) 
		{ cin >> d[i];
		tot += d[i];
	}
	cin >> f >> t;
	if (f > t) swap(f, t);
	for (int i = f; i < t; i++) ans1 += d[i];
	ans2 = tot - ans1;
	cout << min ( ans1, ans2 ) << endl ;
}
