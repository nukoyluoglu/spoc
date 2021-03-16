#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, i, x[100010], y[100010], c = 0;
	vector<int> v;
	cin >> n;
	map<pair<int, int>, int> mp;
	for (i = 0; i < n; i++) 
		{ cin >> x[i] >> y[i];
		mp[make_pair(x[i], y[i])]++;
	}
	for (i = 0; i < n; i++) { v.push_back(mp[make_pair(x[i], y[i])]); }
	sort(v.begin(), v.end());
	if (v[v.size() - 1] == 0)
		{ cout << "1" << endl;
	} else
		{ cout << v. back ( ) ;

	} return 0;
}
