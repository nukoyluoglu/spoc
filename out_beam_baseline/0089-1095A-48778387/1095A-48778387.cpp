#include <bits/stdc++.h>

using namespace std;

int main() 
	{ char s[60];
	int n, ans = 0;
	cin >> n;
	cin >> s;
	for (int i = 0; i < n; i += ans) 
		{ ans += 1;
		cout << s[i];
	}
	cout << endl ;
	return 0;
}
