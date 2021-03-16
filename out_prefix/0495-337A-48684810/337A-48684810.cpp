#include <bits/stdc++.h>

using namespace std;

bool power_of_two(int n) 
	{ int m;
	m = n - 1;
	if (!n & m)
		{ return true;
	} else
		{ return false;
} }
int main() 
	{ int n, m, a, mn = 10000;
	cin >> n >> m;
	vector<int> v;
	for (int i = 0; i < m; i++) 
		{ cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	for (int i = n - 1; i < m; i++) { mn = min(mn, v[i] - v[i - n + 1]); }
	cout << mn << endl ;

}
