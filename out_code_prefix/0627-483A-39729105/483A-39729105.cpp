#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n1, n2;
	cin >> n1 >> n2;
	if (n1 % 2 != 0) n1++;
	if (n2 - n1 < 2) 
		{ cout << "-1" << endl;
	}  else 
		{ cout << n1 << " " << ( n1 + 1 ) <<' '<< n2 + 2 << endl ;

	}
	return 0;
}
