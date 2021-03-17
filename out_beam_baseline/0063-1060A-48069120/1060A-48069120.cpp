#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, count = 0;
	cin >> n;
	char c;
	for (int i = 0; i < n; i++) 
		{ cin >> c;
		if (c == '8') count++;
	}
	if (n < 11 || count == 0) 
		{ cout << 0 << endl;
		return 0;
		;
	}
	cout << min ( count, n / 11 ) << endl ;
	return 0;
	;
}
