#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int a, i, b = 0, c = 0, s, t, n, l1 = 0, l2 = 0, arr[105];
	cin >> n;
	for (a = 1; a <= n; a++) { cin >> arr[a]; }
	cin >> s;
	cin >> t;
	if (s > t) 
		{ b = t;
		c = s;
	}  else 
		{ b = s;
		c = t;
	}
	for (a = b; a < c; a++) { l1 = l1 + arr[a]; }
	for (a = c; a != b; a++) 
		{ l2 = l2 + arr[a];
		if (a == n) a = 0;
	}
	if (l1 <= l2)
		{ cout << l1 << endl;
	} else
		{ cout << l2 << endl ;

	} return 0;
}
