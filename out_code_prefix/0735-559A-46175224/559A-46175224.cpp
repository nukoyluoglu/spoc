#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long a, b, c, d, e, f, maxlevel;
	cin >> a >> b >> c >> d >> e >> f;
	maxlevel = b + c;
	long curr = a * 2 - 1;
	long sum = 0;
	for (int i = 0; i < maxlevel; i++) 
		{ if (b > 0)
			{ curr++;
		} else if (b < 0)
			{ curr--;
		} b--;
		if (f > 0)
			{ curr++;
		} else if (f < 0)
			{ curr--;
		} f--;
		sum += curr;
	}
	cout << sum << endl ;

	return 0;
}
