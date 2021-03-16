#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int s = 9999999999;
	int n;
	cin >> n;
	pair<int, int> a[n];
	for (int i = 0; i < n; i++) 
		{ cin >> a[i].first;
		a[i].second = i + 1;
	}
	sort(a, a + n);
	for (int i = 0; i < n - 1; i++) 
		{ if (a[i].first == a[i + 1].first && a[0].first == a[i].first) { s = min(s, a[i + 1].second - a[i].second); }
	}
	cout << s << endl ;

	return 0;
}
