#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long q;
	cin >> q;
	while (q--) 
		{ long long a, b;
		cin >> a >> b;
		long long prod = a * b;
		long long round1 = round(cbrt(prod));
		if (a % round1 == 0 && b % round1 == 0) 
			{ if (round1 == 1) 
				{ if (a == 1 && b == 1)
					{ cout << "Yes"
						{ << "\n";
				} } else
					{ cout << "No"
						{ << "\n";
			} } }  else
				{ cout << "Yes"
					{ << "\n";
		} } }  else
			{ cout << "No"
				{ <<'\n';

	} } }
	return 0;
}
