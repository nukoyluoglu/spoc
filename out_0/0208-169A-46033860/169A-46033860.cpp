#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, a, b;
	cin >> n >> a >> b;
	vector<int> h(n);
	for (int i = 0; i < n; i++) { cin >> h[i]; }
	sort(h.begin(), h.end());
	cout << h [ b ] - h [ a - 1 ] << "\n" ;

	return 0;
}
