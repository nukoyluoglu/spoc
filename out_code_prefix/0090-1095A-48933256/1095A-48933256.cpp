#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	string s;
	cin >> s;
	string ans;
	int cnt = 0, sum = 0;
	for (int i = 0; i < n; i += cnt) 
		{ ans.push_back(s[i]);
		cnt++;
	}
	cout << ans << endl ;

	return 0;
}
