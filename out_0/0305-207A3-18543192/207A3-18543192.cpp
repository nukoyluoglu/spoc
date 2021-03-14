#include <bits/stdc++.h>

using namespace std;

const int MAX = 2e5;
pair<pair<long long, long long>, long long> a[MAX + 9];
long long n, k, a0, x, y, m, ans, cnt, t, tmp;
int main() 
	{ cin >> n;
	for (int i = 0; i < n; i++) 
		{ cin >> k >> a0 >> x >> y >> m, t = 0;
		for (int j = 0; j < k; j++) 
			{ if (cnt <= MAX) a[cnt++] = {{t, a0}, i};
			tmp = (a0 * x + y) % m;
			if (tmp < a0 && j != k - 1) t++;
			a0 = tmp;
		}
		ans = max(ans, t);
	}
	cout << ans << '\n';
	if (cnt <= MAX) 
		{ sort(a, a + cnt);
		for ( int i = 0 ; i < cnt ; i ++ ) { cout << a [ i ]. first. second << " " ; }

	}
}
