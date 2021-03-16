#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n, m;
	cin >> n >> m;
	vector<long long> a(m, 0);
	for (long long i = 0; i < m; i++) { cin >> a[i]; }
	sort(a.begin(), a.end());
	long long l, r;
	l = r = 0;
	r = n - 1;
	long long mn = a[m - 1] - a[0];
	while (r != m) 
		{ mn = min(mn, a[r] - a[l]);
		l++;
		r++;
	}
	cout << mn << endl ;

	return 0;
}
