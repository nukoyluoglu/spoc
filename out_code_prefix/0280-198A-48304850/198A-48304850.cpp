#include <bits/stdc++.h>

using namespace std;

int main() 
	{ double k, b, n, t;
	cin >> k >> b >> n >> t;
	int x = 0;
	double dub = (t * (k - 1) + b) / (b + k - 1);
	if (k == 1) 
		{ dub = (t - 1) / b;
		x = (int)dub;
		if (x > n) { x = n; }
	}  else 
		{ for (int i = 1; i <= n + 1; i++) 
			{ if (pow(k, i) >= (int)dub + 1) 
				{ x = i - 1;
				break;
			}
			if (i == n + 1) { x = n; }
		}
	}
	int ans = n - x;
	cout << ans << endl ;

	return 0;
}
