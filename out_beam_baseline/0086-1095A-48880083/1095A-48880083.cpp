#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, it = 1;
	string s;
	cin >> n >> s;
	for (int i = 0; i < n; i += it) 
		{ it++;
		cout << s[i];
	}
	cout << endl ;
}
