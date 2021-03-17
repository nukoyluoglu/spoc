#include <bits/stdc++.h>

using namespace std;

string s[2525];
int main() 
	{ long long n, p, m = 0, l = 0;
	cin >> n >> p;
	for (int i = 1; i <= n; i++) cin >> s[i];
	for (int i = n; i >= 1; i--) 
		{ m *= 2;
		if (s[i] == "halfplus") m++;
		l += m;
	}
	cout << l * p / 2 << endl ;

	return 0;
}
