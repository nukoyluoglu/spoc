#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	long long sum = 0, cur;
	for (size_t i = 0; i < n; i++) 
		{ cin >> cur;
		sum += cur;
	}
	long long Max1 = -1, Max2 = -1;
	for (size_t i = 0; i < n; i++) 
		{ cin >> cur;
		if (cur > Max1) 
			{ Max2 = Max1;
			Max1 = cur;
		}  else if (cur > Max2) 
			{ Max2 = cur;
		}
	}
	cout << ( Max2 + Max1 >= sum? "YES\n" : "NO)\n" ) ;

	return 0;
}
