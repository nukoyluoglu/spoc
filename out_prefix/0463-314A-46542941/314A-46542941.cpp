#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n, k;
	cin >> n >> k;
	long long sum = 0;
	long long pos = 1;
	for (long long i = 1; i <= n; i++) 
		{ long long x;
		cin >> x;
		long long d = sum - (pos - 1) * (n - i) * x;
		if (d < k)
			{ cout << i << '\n';
		} else 
			{ sum += x * (pos - 1);
			++ pos ;

		}
	}
	return 0;
}
