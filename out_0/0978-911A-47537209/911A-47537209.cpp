#include <bits/stdc++.h>

using namespace std;

const int oo = 1e9;
int main() 
	{ int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	int mn = *min_element(a.begin(), a.end());
	int ans = oo;
	for (int i = 0, prev = -oo; i < n; i++)
		{ if (a[i] == mn) 
			{ ans = min(ans, i - prev);
			prev = i;
		}
	} cout << ans <<'\n';

	return 0;
}
