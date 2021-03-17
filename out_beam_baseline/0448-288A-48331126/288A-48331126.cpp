#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, k, sig = 0;
	string s;
	cin >> n >> k;
	if (k == 1 && n > 1)
		{ cout << "-1\n";
	} else if (k > n)
		{ cout << "-1\n";
	} else if (n == 1 && k == 1)
		{ cout << "a\n";
	} else 
		{ int i, j = n - k + 1;
		if ((j & 1) == 0) { j--, sig = 1; }
		for (i = 0; i <= j; i += 2) s += "ab";
		if (sig) { s += "a", i = j + 2; }
		char c = 'b';
		for (; i < n; i++) s += (char)(c + 1), c = s[i];
		cout << s << endl ;
	}
	return 0;
}
