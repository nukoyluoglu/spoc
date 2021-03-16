#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, i;
	int a[100005];
	while (cin >> n) 
		{ int Min = 0x7fffffff;
		for (i = 1; i <= n; i++) 
			{ cin >> a[i];
			Min = min(a[i], Min);
		}
		int ans = 0x7fffffff;
		int t = -1;
		for (i = 1; i <= n; i++) 
			{ if (a[i] == Min) 
				{ t = i;
				break;
			}
		}
		for (i = t + 1; i <= n; i++) 
			{ if (a[i] == Min) 
				{ ans = min(i - t, ans);
				t = i;
			}
		}
		cout << ans << endl ;

	}
	return 0;
}
