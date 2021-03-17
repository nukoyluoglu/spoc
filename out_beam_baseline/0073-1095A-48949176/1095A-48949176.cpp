#include <bits/stdc++.h>

using namespace std;

long long x, y, z = 1;
string s, ss;
int main() 
	{ cin >> x >> s;
	for (int i = 0; i < x;) 
		{ ss += s[i];
		i += z;
		z++;
	}
	cout << ss << endl ;
	return 0;
}
