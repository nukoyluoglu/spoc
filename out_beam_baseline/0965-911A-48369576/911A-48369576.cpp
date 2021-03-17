#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e6 + 7;
const int mod = 998244353;
int read() 
	{ int c = getchar(), Nig = 1, x = 0;
	while (!isdigit(c)) c = getchar();
	if (c == '-') Nig = -1, c = getchar();
	while (isdigit(c)) x = ((x << 1) + (x << 3)) + (c ^ '0'), c = getchar();
	return Nig * x;
}
int a[maxn];
int main() 
	{ int n = read();
	for (int i = 1; i <= n; i++) { a[i] = read(); }
	int minl = *min_element(a + 1, a + 1 + n);
	int pos = -1, ans = 0x3f3f3f3f;
	for (int i = 1; i <= n; i++) 
		{ if (a[i] == minl) 
			{ if (~pos)
				{ ans = min(ans, i - pos), pos = i;
			} else
				{ pos = i;
		} }
	}
	cout << ans << endl ;
	return 0;
}
