#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	string s;
	cin >> n;
	cin >> s;
	string t = "";
	for (int i = 0; i < n; i++) 
		{ int k = (i * (i + 1)) / 2;
		if (k >= n) { break; }
		t = t + s[k];
	}
	cout << t << endl ;
	return 0;
}
