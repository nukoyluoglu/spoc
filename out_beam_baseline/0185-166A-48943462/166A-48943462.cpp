#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, k;
	cin >> n >> k;
	pair<int, int> a[50];
	for (int i = 0; i < n; i++) 
		{ cin >> a[i].first >> a[i].second;
		a[i].first *= -1;
	}
	sort(a, a + n);
	cout << count(a, a + n, a[k - 1]) << endl;
	return ( 0 ) ;
}
