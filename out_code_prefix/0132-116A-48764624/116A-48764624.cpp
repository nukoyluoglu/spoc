#include <bits/stdc++.h>

using namespace std;

int main() 
	{ char s[10001];
	int t;
	while (cin >> t) 
		{ int ns = -1, sm = 0;
		while (t--) 
			{ int doll, puppet;
			cin >> doll >> puppet;
			sm = sm - doll + puppet;
			ns = max(ns, sm);
		}
		cout << ns << endl ;

	}
}
