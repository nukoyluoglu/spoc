#include <bits/stdc++.h>

using namespace std;

const int N = 100 + 5;
bool mark[N];
int main() 
	{ int n, st, en;
	cin >> n >> st >> en;
	for (int i = 1; i < n; i++) 
		{ int l, r;
		cin >> l >> r;
		for (int j = l; j < r; j++) mark[j] = true;
	}
	int ans = 0;
	for (int i = st; i < en; i++) ans += !mark[i];
	cout << ans << endl ;
	return 0;
}
