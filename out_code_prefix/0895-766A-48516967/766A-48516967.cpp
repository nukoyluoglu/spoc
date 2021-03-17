#include <bits/stdc++.h>

using namespace std;

string a, b;
int main() 
	{ cin >> a >> b;
	if (a != b) 
		{ cout << max(a.size(), b.size()) << endl;
		return 0;
	}  else 
		{ cout << "-1\n" ;

		return 0;
	}
}
