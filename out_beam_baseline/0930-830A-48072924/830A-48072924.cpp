#include <bits/stdc++.h>

using namespace std;

const int64_t infint64_t = 9223372036854775807LL;
void solve() 
	{ int64_t n, k, p;
	cin >> n >> k >> p;
	vector<int64_t> a(n);
	for (int64_t i = 0; i < n; i++) { cin >> a[i]; }
	sort(a.begin(), a.end());
	vector<int64_t> b(k);
	for (int64_t i = 0; i < k; i++) { cin >> b[i]; }
	sort(b.begin(), b.end());
	int64_t best = infint64_t;
	for (int64_t i = 0; i <= k - n; i++) 
		{ int64_t curWorst = 0;
		for (int64_t j = 0; j < n; j++) 
			{ int64_t cur = abs(b[i + j] - p) + abs(b[i + j] - a[j]);
			curWorst = max(curWorst, cur);
		}
		best = min(best, curWorst);
	}
	cout << best << endl;
}
int main() 
	{ solve ( ) ;
	return 0;
}
