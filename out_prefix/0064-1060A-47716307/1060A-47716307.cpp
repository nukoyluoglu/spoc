#include <bits/stdc++.h>

using namespace std;

int k, i, n, ans, m;
string s;
int main() 
	{ cin >> n >> s;
	for (i = 0; i < n; i++) 
		{ if (s[i] == '8') k++;
	}
	ans = min(k, n / 11);
	cout << ans << endl ;

}
