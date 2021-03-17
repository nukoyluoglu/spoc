#include <bits/stdc++.h>

using namespace std;

int a[10010];
int main() 
	{ a[0] = 0;
	for (int i = 1; i <= 10000; i++) a[i] = a[i - 1] + i;
	int n;
	while (cin >> n) 
		{ int ans = 0;
		for (int i = 1;; i++) 
			{ if (n >= a[i])
				{ n -= a[i], ans++;
			} else
				{ break;
		} }
		cout << ans << endl ;
	}
	return 0;
}
