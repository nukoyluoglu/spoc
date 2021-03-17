#include <bits/stdc++.h>

using namespace std;

int a[100001], b[100001], i, n;
long long s;
int main() 
	{ cin >> n;
	for (i = 1; i <= n; i++) 
		{ cin >> a[i];
		s += a[i];
	}
	for (i = 1; i <= n; i++) cin >> b[i];
	sort(b + 1, b + n + 1);
	if (b[n] + b[n - 1] >= s)
		{ cout << "YES" << endl;
	} else
		{ cout << "NO" << endl ;
	} return 0;
}
