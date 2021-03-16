#include <bits/stdc++.h>

using namespace std;

int k, b, n, t, ans;
long long m = 1;
int main() 
	{ cin >> k >> b >> n >> t;
	while (m <= t) m = m * k + b, ans++;
	if (n >= ans)
		{ cout << n - ans + 1 << endl;
	} else
		{ cout << 0 << endl ;

	} return 0;
}
