#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, b;
	cin >> n >> b;
	vector<int> V(n);
	for (int i = 0; i < n; ++i) cin >> V[i];
	int total = b;
	for (int i = 0; i < n; ++i) total += V[i];
	double t = (double)total / n;
	vector<double> ans(n);
	for (int i = 0; i < n; ++i) 
		{ if (V[i] > t) 
			{ cout << "-1\n";
			return 0;
		}
		ans[i] = t - V[i];
	}
	cout << fixed << setprecision(10);
	for ( int i = 0 ; i < n ; i ++ ) cout << ans [ i ] << endl ;

	return 0;
}
