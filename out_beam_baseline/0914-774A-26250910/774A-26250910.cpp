#include <bits/stdc++.h>

using namespace std;

long long n, c1, c2;
long long solve(long long g) 
	{ long long t1 = ceil((double)n / g), t2 = n / g, left = n, res = 0;
	for (; t2 * g != left && left > 0; left -= t1, g--) res += (c1 + c2 * (t1 - 1) * (t1 - 1));
	for (; g > 0; left -= t2, g--) res += (c1 + c2 * (t2 - 1) * (t2 - 1));
	return res;
}
int main() 
	{ char t;
	cin >> n >> c1 >> c2;
	long long p = 0, r = 0, i;
	for (i = 0; i < n; i++) 
		{ cin >> t;
		(t == '1') ? p++ : r++;
	}
	long long lo = 1, hi = p;
	while (lo < hi) 
		{ long long diff = hi - lo;
		long long p1 = lo + diff / 3, p2 = lo + (2 * diff + 2) / 3;
		long long s1 = solve(p1), s2 = solve(p2);
		if (s1 == s2)
			{ lo = p1 + 1, hi = p2 - 1;
		} else if (s1 > s2)
			{ lo = p1 + 1;
		} else
			{ hi = p2 - 1;
	} }
	cout << solve ( lo ) << endl ;
}
