#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	vector<long long> a(n * 2);
	for (int i = 0; i < n * 2; i++) { cin >> a[i]; }
	sort(a.begin(), a.end());
	long long ans = LLONG_MAX;
	for (int i = 0; i < n; i++) 
		{ if (i == 0) 
			{ ans = min(ans, (a[n - 1] - a[0]) * (a[n * 2 - 1] - a[n]));
		}  else 
			{ ans = min(ans, (a[i + n - 1] - a[i]) * (a[n * 2 - 1] - a[0]));
		}
	}
	cout << ans << endl ;
	return 0;
}
