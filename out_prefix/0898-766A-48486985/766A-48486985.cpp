#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string a, b;
	int c = 0;
	cin >> a >> b;
	int len1 = a.size();
	int len2 = b.size();
	if (a == b)
		{ cout << -1 << endl;
	} else 
		{ cout << max ( len1, len2 ) << endl ;

	}
	return 0;
}
