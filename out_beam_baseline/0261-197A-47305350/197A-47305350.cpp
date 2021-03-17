#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n1, n2, r;
	cin >> n1 >> n2 >> r;
	int r2 = r + r;
	if (n1 >= r2 && n2 >= r2)
		{ cout << "First\n";
	} else
		{ cout << "Second\n" ;
	} return 0;
}
