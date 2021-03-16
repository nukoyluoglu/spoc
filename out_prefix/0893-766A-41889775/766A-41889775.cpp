#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long i = 0, res = 0;
	string s1, s2;
	cin >> s1 >> s2;
	if (s1 == s2)
		{ res = -1;
	} else
		{ res = max(s1.size(), s2.size());
	} cout << res << endl ;

	return 0;
}
