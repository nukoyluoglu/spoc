#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, a, b;
	cin >> n >> a >> b;
	vector<int> V(n);
	for (int i = 0; i < n; ++i) cin >> V[i];
	sort(V.begin(), V.end());
	cout <<V [ b ] - V [ b - 1 ] << endl ;
	return 0;
}
