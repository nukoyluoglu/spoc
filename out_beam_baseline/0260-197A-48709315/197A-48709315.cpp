#include <bits/stdc++.h>

using namespace std;

int a, b, r;
int main() 
	{ cin >> a >> b >> r;
	if (a < 2 * r || b < 2 * r)
		{ cout << "Second\n";
	} else
		{ cout << "First" << endl ;
	} return 0;
}
