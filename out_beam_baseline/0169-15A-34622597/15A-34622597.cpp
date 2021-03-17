#include <bits/stdc++.h>

using namespace std;

int a[10005];
int main() 
	{ int n, t;
	cin >> n >> t;
	t *= 2;
	int mi = 5000, mx = 0;
	memset(a, 0, sizeof(a));
	while (n--) 
		{ int x, aa;
		cin >> x >> aa;
		int ll = x * 2 + 4000 - aa;
		int rr = x * 2 + 4000 + aa;
		for (int i = ll; i <= rr; ++i) 
			{ a[i]++;
			mx = max(mx, i);
			mi = min(mi, i);
		}
	}
	int len = 0, ans = 2;
	for (int i = mi; i <= mx; ++i) 
		{ len++;
		if (a[i]) 
			{ if (len > t)
				{ ans += 2;
			} else if (len == t)
				{ ans++;
			} len = 0;
		}
	}
	if (len > t)
		{ ans += 2;
	} else if (len == t)
		{ ans++;
	} cout << ans << endl ;
	return 0;
}
