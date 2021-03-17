#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, i, no_of_8 = 0, groups;
	char c;
	cin >> n;
	for (i = 1; i <= n; i++) 
		{ cin >> c;
		if (c == '8') no_of_8++;
	}
	groups = n / 11;
	if (no_of_8 >= groups)
		{ cout << groups << endl;
	} else
		{ cout << no_of_8 << endl ;
	} return 0;
}
