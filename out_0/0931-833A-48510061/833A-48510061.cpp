#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long t;
	cin >> t;
	while (t--) 
		{ long long a, b;
		cin >> a >> b;
		long long c = pow(a * b, 1.0 / 3.0);
		while (c * c * c < a * b) c++;
		while (c * c * c > a * b) c--;
		if (c * c * c == a * b && a % c == 0 && b % c == 0) 
			{ cout << "Yes\n";
		}  else 
			{ cout << "No\n" ;

		}
	}
	return 0;
}
