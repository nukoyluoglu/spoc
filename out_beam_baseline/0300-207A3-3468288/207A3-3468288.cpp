#include <bits/stdc++.h>

using namespace std;

long long a1, a2, n, k, second = 0, ans = 0, ans1;
vector<pair<long long, pair<long long, long long>>> h;
void read(void) 
	{ cin >> n;
	for (int i = 0, x, y, m; i < n; ++i) 
		{ cin >> k;
		second += k;
		cin >> a1;
		long long t = a1;
		cin >> x >> y >> m;
		h.push_back(make_pair(0, make_pair(a1, i + 1)));
		ans1 = 0;
		for (int j = 1; j < k; ++j) 
			{ a2 = (a1 * x + y) % m;
			if (a2 < a1) ans1++;
			a1 = a2;
			t = max(t, a1);
			if (h.size() <= 200000) h.push_back(make_pair(ans1, make_pair(a1, i + 1)));
		}
		ans = max(ans, ans1);
	}
	sort(h.begin(), h.end());
	cout << ans << "\n";
	if (second <= 200000)
		{ for (int i = 0; i < second; ++i) cout << h[i].second.first << " " << h[i].second.second << "\n";
} }
int main() 
	{ read ( ) ;
	return 0;
}
