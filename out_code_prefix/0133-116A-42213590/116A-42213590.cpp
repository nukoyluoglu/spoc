#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	while (cin >> n) 
		{ int a, b, total, k = 0, max;
		for (int i = 0; i < n; i++) 
			{ cin >> a >> b;
			if (k == 0) 
				{ total = b;
				k = 1;
				max = b;
			}  else if (k == 1) 
				{ total = total - a + b;
				if (total > max) max = total;
			}
		}
		cout << max << endl ;

	}
	return 0;
}
