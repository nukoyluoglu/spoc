#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long int n, i, k, x = 1, b = 0;
	cin >> n >> k;
	long long int a[n];
	for (i = 0; i < n; i++) cin >> a[i];
	for (i = 1; i < n; i++) 
		{ if (b - x * a[i] * (n - i - 1) < k)
			{ cout << i + 1 << endl;
		} else 
			{ b += x * a[i];
			x ++ ;
		}
	}
	return 0;
}
