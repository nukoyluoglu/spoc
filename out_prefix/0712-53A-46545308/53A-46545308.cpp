#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string s;
	cin >> s;
	int n;
	cin >> n;
	vector<string> a(n);
	for (int i = 0; i < n; ++i) { cin >> a[i]; }
	int opt = -1;
	for (int i = 0; i < n; ++i) 
		{ if ((int)(a[i]).size() < (int)(s).size()) { continue; }
		if (a[i].substr(0, (int)(s).size()) != s) { continue; }
		if (opt == -1 || a[i] < a[opt]) { opt = i; }
	}
	if (opt != -1) 
		{ cout << a[opt];
	}  else 
		{ cout << s;
	}
	cout << endl ;

}
