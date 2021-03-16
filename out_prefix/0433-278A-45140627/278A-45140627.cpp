#include <bits/stdc++.h>

using namespace std;

const int maxn = 105;
int n, d[maxn], s, t;
int main() 
	{ cin >> n;
	for (int i = 1; i <= n; i++) cin >> d[i];
	cin >> s >> t;
	int clock = 0, revert = 0, i;
	int front = min(s, t), tail = max(s, t);
	for (i = front; i < tail; i++) { clock += d[i]; }
	for (i = tail; i != front; i++) 
		{ if (i > n) i %= n;
		if (i == front) break;
		revert += d[i];
	}
	cout << min ( clock, revert ) << endl ;

}
