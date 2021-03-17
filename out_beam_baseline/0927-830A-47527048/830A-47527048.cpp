#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;
const long long int INF = 1e18;
vector<long long int> key, per;
long long int ans = INF;
int main() 
	{ int i, j, k, n, p, x;
	cin >> n >> k >> p;
	for (i = 0; i < n; i++) 
		{ cin >> x;
		per.push_back(x);
	}
	for (i = 0; i < k; i++) 
		{ cin >> x;
		key.push_back(x);
	}
	sort(per.begin(), per.end());
	sort(key.begin(), key.end());
	for (j = 0; j + n - 1 < k; j++) 
		{ long long int now = 0;
		for (i = 0; i < n; i++) { now = max(now, abs(per[i] - key[j + i]) + abs(key[j + i] - p)); }
		ans = min(ans, now);
	}
	cout << ans << endl ;
	return 0;
}
