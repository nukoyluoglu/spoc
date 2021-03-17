#include <bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f;
const int maxa = 1e5 + 10;
int a[maxa << 1];
int main() 
	{ int n;
	while (cin >> n) 
		{ int i;
		for (i = 0; i < 2 * n; i++) cin >> a[i];
		sort(a, a + 2 * n);
		long long x = a[n - 1] - a[0];
		long long y = a[2 * n - 1] - a[n];
		long long minsq = x * y;
		x = a[2 * n - 1] - a[0];
		for (i = 1; i < n; i++) 
			{ y = a[i + n - 1] - a[i];
			minsq = min(minsq, x * y);
		}
		cout << minsq << endl ;
	}
	return 0;
}
