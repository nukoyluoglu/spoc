#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long k, d;
	cin >> k >> d;
	if (d == 0 && k > 1) 
		{ cout << "No solution" << endl;
	}  else 
		{ cout << d;
		k--;
		while (k) 
			{ cout << 0;
			k--;
		}
		cout << endl ;
	}
	return 0;
}
