#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, minix, p, q;
	cin >> n;
	vector<int> v(n);
	minix = INT_MAX;
	for (int i = 0; i < n; i++) 
		{ cin >> v[i];
		minix = min(minix, v[i]);
	}
	p = -999999;
	q = INT_MAX;
	for (int i = 0; i < n; i++) 
		{ if (v[i] == minix) 
			{ q = min(q, i - p);
			p = i;
		}
	}
	cout << q << endl ;
	return 0;
}
