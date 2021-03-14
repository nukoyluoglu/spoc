#include <bits/stdc++.h>

using namespace std;

const int Maxn = 15, Maxm = 100 + 5;
int n, m, k, a[Maxn][Maxm], b[Maxn][Maxm], c[Maxn][Maxm], ans;
int main() 
	{ cin >> n >> m >> k;
	string s;
	for (int i = 0; i < n; i++) 
		{ cin >> s;
		for (int j = 0; j < m; j++) cin >> a[i][j] >> b[i][j] >> c[i][j];
	}
	pair<int, int> d[Maxm];
	for (int i = 0; i < n; i++) 
		{ for (int j = 0; j < n; j++) 
			{ for (int l = 0; l < m; l++) d[l] = make_pair(b[j][l] - a[i][l], c[i][l]);
			sort(d, d + m);
			reverse(d, d + m);
			int num = 0, p = 0, cnt = 0;
			while (p < m && cnt + d[p].second <= k) 
				{ if (d[p].first < 0) break;
				cnt += d[p].second;
				num += d[p].first * d[p].second;
				p++;
			}
			if (d[p].first > 0) num += d[p].first * (k - cnt);
			ans = max(ans, num);
		}
	}
	cout << ans << endl ;

	return 0;
}
