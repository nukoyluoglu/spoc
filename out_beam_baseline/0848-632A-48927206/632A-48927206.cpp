#include <bits/stdc++.h>

using namespace std;

string op[444];
int main() 
	{ long long n, p;
	cin >> n >> p;
	p /= 2;
	for (int i = 1; i <= n; i++) { cin >> op[i]; }
	long long ans = 0, send = 0;
	for (int i = n; i >= 1; i--) 
		{ send *= 2;
		if (op[i] == "halfplus") { send++; }
		ans += send;
	}
	cout << ans * p << endl ;
	return 0;
}
