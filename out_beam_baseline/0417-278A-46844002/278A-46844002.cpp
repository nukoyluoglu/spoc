#include <bits/stdc++.h>

using namespace std;

int n, m, dist[100015], x, y, prefs[100015], ans, ans1;
int main() 
	{ cin >> n;
	for (int i = 0; i < n; i++) { cin >> dist[i]; }
	prefs[0] = dist[0];
	for (int i = 1; i < n; i++) { prefs[i] = dist[i] + prefs[i - 1]; }
	cin >> x >> y;
	x--;
	y--;
	if (x > y) { swap(x, y); }
	ans = prefs[y - 1];
	ans -= prefs[x - 1];
	ans1 = prefs[n - 1] - ans;
	cout << min ( ans, ans1 ) << endl ;
	return 0;
}
