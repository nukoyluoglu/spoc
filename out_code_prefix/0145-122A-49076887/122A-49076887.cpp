#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, i, k, a, j, h;
	cin >> n;
	for (i = 1; i <= n; i++) 
		{ k = i;
		if (n % k == 0) 
			{ j = h = 0;
			while (k != 0) 
				{ a = k % 10;
				if (a == 4 || a == 7) { h++; }
				k = k / 10;
				j++;
			}
			if (h == j) 
				{ cout << "YES" << endl;
				return 0;
			}
		}
	}
	cout << "NO" << endl ;

}
