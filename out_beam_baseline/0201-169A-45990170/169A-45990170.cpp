#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 55;
const int M = 1e9 + 7;
int n, a, b;
vector<int> v;
int main() 
	{ cin >> n >> a >> b;
	for (int i = 1; i <= n; ++i) 
		{ int q;
		cin >> q;
		v.push_back(q);
	}
	sort(v.begin(), v.end());
	int q = v[n - a] - v[n - a - 1];
	if (q <= 0) 
		{ cout << 0 << endl;
		exit(0);
	}
	cout << q << endl ;
	return 0;
}
