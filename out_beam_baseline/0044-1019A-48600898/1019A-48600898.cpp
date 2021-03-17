#include <bits/stdc++.h>

using namespace std;

pair<long long int, long long int> p[3007];
long long int c[3007];
int main() 
	{ long long int n, m;
	cin >> n >> m;
	long long int mx = 0;
	for (long long int i = 0; i < n; i++) 
		{ cin >> p[i].second >> p[i].first;
		c[p[i].second]++;
	}
	sort(p, p + n);
	for (long long int i = 2; i <= m; i++) mx = max(mx, c[i]);
	long long int ans = 21474836470000;
	long long int sum = 0;
	for (long long int i = mx; i >= 0; i--) 
		{ for (long long int j = 0; j < n; j++) 
			{ if (p[j].second != 1 && c[p[j].second] > i) 
				{ c[p[j].second]--;
				p[j].second = 1;
				c[1]++;
				sum += p[j].first;
			}
		}
		long long int k = i - c[1] + 1;
		long long int t = sum;
		for (long long int j = 0; j < n; j++) 
			{ if (k > 0) 
				{ if (p[j].second != 1) 
					{ t += p[j].first;
					k--;
				}
			}
		}
		ans = min(ans, t);
	}
	cout << ans <<'\n';
}
