#include <bits/stdc++.h>

using namespace std;

void solve() 
	{ long long a1, a2, b1, b2, c1, c2;
	cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
	long long d = (b1 - a1) * (c2 - a2) - (b2 - a2) * (c1 - a1);
	if (d == 0) 
		{ cout << "TOWARDS" << endl;
	}  else if (d > 0) 
		{ cout << "LEFT" << endl;
	}  else 
		{ cout << "RIGHT" << endl;
	}
}
int main() 
	{ cout << setprecision(12) << fixed;
	solve ( ) ;

	return 0;
}
