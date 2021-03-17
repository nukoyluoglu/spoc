#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, k = 0;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; i < n; i++) 
		{ if (s[i] == '8') { k++; }
	}
	cout << min ( n / 11, k ) << endl ;

	return 0;
}
