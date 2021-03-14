#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, d[100], s, t, sum = 0, res = 0, mini = 0;
	cin >> n;
	for (int i = 0; i < n; i++) 
		{ cin >> d[i];
		sum += d[i];
	}
	cin >> s >> t;
	for (int i = min(s - 1, t - 1); i < max(t - 1, s - 1); i++) { res += d[i]; }
	mini = min(res, sum - res);
	cout << mini << endl ;

	return 0;
}
