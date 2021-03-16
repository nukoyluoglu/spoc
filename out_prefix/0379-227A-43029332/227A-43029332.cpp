#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long x[4], y[4];
	for (int i = 1; i <= (3); i++) cin >> x[i] >> y[i];
	long long a1 = y[1] - y[2];
	long long b1 = x[2] - x[1];
	long long c1 = x[1] * y[2] - x[2] * y[1];
	long long a2 = y[2] - y[3];
	long long b2 = x[3] - x[2];
	long long c2 = x[2] * y[3] - x[3] * y[2];
	if (a1 * b2 == a2 * b1 && b1 * c2 == b2 * c1) 
		{ cout << "TOWARDS\n";
	}  else 
		{ if (a1 * b2 > a2 * b1)
			{ cout << "LEFT\n";
		} else
			{ cout << "RIGHT\n" ;

	} }
	return 0;
}
