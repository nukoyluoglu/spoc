#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long ar[100000], i, x, j, y, tn = 1, ans = 0;
	int n, m;
	long long tc;
	cin >> n;
	vector<long long> v, v1;
	v.push_back(0);
	for (i = 0; i < n; i++) 
		{ cin >> x;
		v.push_back(x);
	}
	v1 = v;
	for (i = 1; i < v.size(); i++) v[i] += v[i - 1];
	cin >> x >> y;
	if (x > y) swap(x, y);
	if (x == y) 
		{ cout << 0 << endl;
		return 0;
	}
	int t1 = v[y - 1] - v[x - 1];
	int t2 = v[v.size() - 1] - v[y] + v1[y] + v[x - 1];
	cout << min ( t1, t2 ) << endl ;
	return 0;
}
