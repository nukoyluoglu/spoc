#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long int n, a, b, kount = 0, x;
	vector<long long int> h;
	cin >> n >> a >> b;
	for (int i = 0; i < n; i++) 
		{ cin >> x;
		h.push_back(x);
	}
	sort(h.begin(), h.end());
	if (h[b - 1] != h[b]) { kount = h[b] - h[b - 1]; }
	cout << kount << endl ;
	return 0;
}
