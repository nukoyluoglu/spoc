#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n, a[100100];
	cin >> n;
	for (int i = 0; i < n; ++i) cin >> a[i];
	long long s = 0;
	for (int k = 0; k < n - 1; ++k) 
		{ int t = 0;
		while (k + (1 << t + 1) < n) ++t;
		s += a[k], a[k + (1 << t)] += a[k];
		cout << s << endl ;
	}
	return 0;
}
