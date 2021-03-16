#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n, p, count = 0, y = 0;
	string x;
	cin >> n >> p;
	vector<string> a;
	for (int i = 0; i < n; i++) 
		{ cin >> x;
		a.push_back(x);
	}
	for (int i = n - 1; i >= 0; i--) 
		{ if (a[i] == "halfplus") 
			{ count = count * 2 + 1;
			y++;
		}
		if (a[i] == "half") { count = 2 * count; }
	}
	long long ans = p * count - (p * y) / 2;
	cout << ans << endl ;

	return 0;
}
