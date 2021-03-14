#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, d[255], s, t;
	int res1 = 0, res2 = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) { cin >> d[i]; }
	for (int i = n + 1; i <= 2 * n; i++) { d[i] = d[i - n]; }
	cin >> s >> t;
	if (s > t) swap(s, t);
	for (int i = s; i < t; i++) { res1 += d[i]; }
	for (int i = t; i < n + s; i++) { res2 += d[i]; }
	cout << min ( res1, res2 ) << endl ;

}
