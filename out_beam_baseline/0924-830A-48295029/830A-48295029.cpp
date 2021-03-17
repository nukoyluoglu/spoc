#include <bits/stdc++.h>

using namespace std;

const int N = 2e5 + 50;
const int M = 1e6;
const long long oo = 1e18;
const int mod = 1e9 + 7;
long long a[1010], b[2010];
long long n, k, p;
bool can(long long md) 
	{ long long id = 0;
	for (int i = 0; i < k; i++) 
		{ if (abs(a[id] - b[i]) + abs(b[i] - p) > md) continue;
		id++;
		if (id == n) return 1;
	}
	return 0;
}
int main() 
	{ cin >> n >> k >> p;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < k; i++) cin >> b[i];
	sort(a, a + n);
	sort(b, b + k);
	long long md, lo = 0, hi = 2e9, ans = 0;
	while (lo <= hi) 
		{ md = (lo + hi) / 2;
		if (can(md)) 
			{ hi = md - 1;
			ans = md;
		}  else
			{ lo = md + 1;
	} }
	cout << ans << endl ;
}
