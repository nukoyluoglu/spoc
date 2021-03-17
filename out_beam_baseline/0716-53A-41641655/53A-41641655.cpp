#include <bits/stdc++.h>

using namespace std;

bool lexi_comp(const string &a, const string &b) 
	{ int n = min(a.size(), b.size());
	for (int i = 0; i < n; i++) 
		{ if (a[i] != b[i]) { return a[i] < b[i]; }
	}
	return a.size() < b.size();
}
bool isPrefix(const string &a, const string &b) 
	{ if (b.size() < a.size()) { return false; }
	for (int i = 0; i < a.size(); i++) 
		{ if (a[i] != b[i]) { return false; }
	}
	return true;
}
int main() 
	{ string a, b, ans;
	int n;
	cin >> a >> n;
	ans = a + string(100, 'z');
	bool ok = false;
	for (int i = 0; i < n; i++) 
		{ cin >> b;
		if (isPrefix(a, b)) 
			{ ok = true;
			if (lexi_comp(b, ans)) { swap(b, ans); }
		}
	}
	if (ok) 
		{ cout << ans << endl;
	}  else 
		{ cout << a << endl ;
	}
	return 0;
}
