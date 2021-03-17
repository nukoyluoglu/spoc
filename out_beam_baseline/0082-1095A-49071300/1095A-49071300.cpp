#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	string s;
	cin >> s;
	int i = 2;
	string ans = "";
	ans = ans + s[0];
	int j = 3;
	while (i <= n - 1) 
		{ ans = ans + s[i];
		i = i + j;
		j++;
	}
	cout << ans << endl ;
	return 0;
}
