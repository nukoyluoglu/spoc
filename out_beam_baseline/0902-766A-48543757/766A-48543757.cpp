#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string a, b;
	cin >> a >> b;
	int sz1 = a.size(), sz2 = b.size();
	if (a == b) 
		{ cout << -1 << endl;
	}  else
		{ cout << max ( sz1, sz2 ) << endl ;
	} return 0;
}
