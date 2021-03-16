#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string st, s;
	int i, a, b, count = 0;
	cin >> a >> st;
	b = a / 11;
	for (i = 0; i < a; i++) 
		{ if (st[i] == '8') { count++; }
	}
	if (count < b) 
		{ cout << count << endl;
	}  else 
		{ cout << b << endl ;

	}
	return 0;
}
