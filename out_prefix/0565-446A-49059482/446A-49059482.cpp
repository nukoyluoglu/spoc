#include <bits/stdc++.h>

using namespace std;

const int maxn = 100005;
const int INF = 0x3fffffff;
double eps = 1e-8;
double pi = acos(-1);
int f[maxn];
int g[maxn];
int a[maxn];
int n;
int main() 
	{ cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++) 
		{ if (a[i] > a[i - 1])
			{ f[i] = f[i - 1] + 1;
		} else
			{ f[i] = 1;
	} }
	for (int i = n; i >= 1; i--) 
		{ if (a[i] < a[i + 1])
			{ g[i] = g[i + 1] + 1;
		} else
			{ g[i] = 1;
	} }
	int ans = 0;
	for (int i = 1; i <= n; i++) 
		{ if (a[i + 1] - a[i - 1] > 1) 
			{ ans = max(ans, f[i - 1] + g[i + 1] + 1);
		}  else 
			{ ans = max(ans, max(f[i - 1] + 1, g[i + 1] + 1));
		}
	}
	cout << ans << endl ;

}
