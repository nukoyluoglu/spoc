#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) { cin >> a[i]; }
	sort(a.begin(), a.end());
	int idx = (a.size() - 1) / 2;
	cout << a [ idx ] << endl ;

	return 0;
}
