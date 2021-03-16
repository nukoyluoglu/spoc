#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long c1, c2, x, k, i, b, n, t, cnt = 0;
	cin >> k >> b >> n >> t;
	c1 = b + t * (k - 1);
	c2 = b + k - 1;
	cnt = 1;
	x = n;
	if (k != 1) 
		{ for (i = n; i >= 0; i--) 
			{ if (c1 >= cnt * c2)
				{ x = i;
			} else
				{ break;
			} cnt *= k;
		}
		cout << x << endl;
	}  else 
		{ for (i = 0; i <= n; i++) 
			{ if (i * b >= 1 + n * b - t) break;
		}
		cout << i << endl ;

	}
	return 0;
}
