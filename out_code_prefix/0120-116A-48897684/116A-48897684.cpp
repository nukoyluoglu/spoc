#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	int on, off, count = 0, c = 0;
	while (n--) 
		{ cin >> off >> on;
		c += on - off;
		if (c > count) count = c;
	}
	cout << count << endl ;

	return 0;
}
