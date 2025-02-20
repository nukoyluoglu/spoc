#include <bits/stdc++.h>

using namespace std;

long long n, k, p;
long long a[1005], b[2005];
bool moze(long long x) 
	{ long long h = 0;
	for (long long i = 0; i < n; i++) 
		{ if (h == k) return false;
		bool sat = false;
		while (h < k) 
			{ long long d = abs(a[i] - b[h]) + abs(b[h] - p);
			h++;
			if (d <= x) 
				{ sat = true;
				break;
			}
		}
		if (!sat) return false;
	}
	return true;
}
int main() 
	{ cin >> n >> k >> p;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < k; i++) cin >> b[i];
	sort(a, a + n);
	sort(b, b + k);
	long long l = 0, r = 4e9, o = -1;
	while (l <= r) 
		{ long long m = (l + r) >> 1;
		if (moze(m)) 
			{ o = m;
			r = m - 1;
		}  else 
			{ l = m + 1;
		}
	}
	cout << o <<'\n';
}
