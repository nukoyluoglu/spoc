#include <bits/stdc++.h>

using namespace std;

int main() 
	{ vector<long long> v;
	vector<long long> v1;
	long long i, j, n, ans, min = 1000000002, t, flag;
	cin >> n;
	for (i = 0; i < n; i++) 
		{ long long x;
		cin >> x;
		v.push_back(x);
		if (x < min) { min = x; }
	}
	for (i = 0; i < n; i++) 
		{ if (min == v[i]) { v1.push_back(i); }
	}
	min = 1000000002;
	for (i = 1; i < v1.size(); i++) 
		{ if ((v1[i] - v1[i - 1]) < min) { min = (v1[i] - v1[i - 1]); }
	}
	cout << min << endl ;
}
