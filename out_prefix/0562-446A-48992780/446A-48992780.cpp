#include <bits/stdc++.h>

using namespace std;

vector<long long> v[100005];
void solve() 
	{ long long n, x = 0, b, y, ans = 0;
	cin >> n;
	long long a[n];
	for (long long i = 0; i < n; i++) 
		{ cin >> a[i];
		if (i == 0) 
			{ v[x].push_back(a[i]);
			continue;
		}
		if (a[i] <= a[i - 1]) x++;
		v[x].push_back(a[i]);
	}
	if (x == 0) 
		{ cout << v[0].size() << '\n';
		return;
	}
	for (long long i = 0; i < x + 1; i++) 
		{ if (i == x) 
			{ y = v[i].size() + 1;
		}  else 
			{ long long n = v[i].size();
			long long m = v[i + 1].size();
			if (m == 1) 
				{ y = n + 1;
			}  else if (n == 1) 
				{ y = m + 1;
			}  else if (v[i + 1][1] - v[i][n - 1] > 1) 
				{ y = n + m;
			}  else if (v[i + 1][0] - v[i][n - 2] > 1) 
				{ y = n + m;
			}  else
				{ y = n + 1;
		} }
		ans = max(ans, y);
	}
	cout << ans << '\n';
	return;
}
int main() 
	{ long long TESTS = 1;
	while ( TESTS -- ) solve ( ) ;

	return 0;
}
