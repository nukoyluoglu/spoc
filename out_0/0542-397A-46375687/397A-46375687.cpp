#include <bits/stdc++.h>

using namespace std;

const int maxn = 100 + 10;
bool mark[maxn];
int main() 
	{ int n;
	cin >> n;
	int L, R;
	for (int i = 0; i < n; i++) 
		{ int l, r;
		cin >> l >> r;
		if (i > 0)
			{ for (int j = l; j < r; j++) mark[j] = true;
		} else
			{ L = l, R = r;
	} }
	int ans = 0;
	for (int i = 0; i < maxn; i++)
		{ if (!mark[i] && L <= i && i < R) ans++;
	} cout << ans << endl ;

	return 0;
}
