#include <bits/stdc++.h>

using namespace std;

long long cross(long long x0, long long y0, long long x1, long long y1) 
	{ return y1 * x0 - y0 * x1;
}
int main() 
	{ vector<long long> X(3), Y(3);
	for (long long i = 0; i < 3; ++i) cin >> X[i] >> Y[i];
	long long c = cross(X[1] - X[0], Y[1] - Y[0], X[2] - X[1], Y[2] - Y[1]);
	if (c == 0)
		{ cout << "TOWARDS\n";
	} else if (c < 0)
		{ cout << "RIGHT\n";
	} else
		{ cout << "LEFT\n" ;
	} return 0;
}
