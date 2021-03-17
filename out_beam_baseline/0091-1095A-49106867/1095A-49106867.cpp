#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, cnt = 1, i = 0;
	string s;
	cin >> n >> s;
	while (true) 
		{ cout << s[i];
		i += cnt;
		cnt++;
		if (i + cnt > n) { break; }
	}
	cout << endl ;
	return 0;
}
