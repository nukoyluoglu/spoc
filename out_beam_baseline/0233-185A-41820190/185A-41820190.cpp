#include <bits/stdc++.h>

using namespace std;

long long mul(long long x, long long p) 
	{ long long ans = 1;
	while (p) 
		{ if (p & 1) ans = ans * x % 1000000007;
		x = x * x % 1000000007;
		p = p >> 1;
	}
	return ans;
}
int main() 
	{ long long n;
	cin >> n;
	if (n == 0)
		{ cout << 1 << endl;
	} else 
		{ long long w = mul(2, n - 1) % 1000000007;
		cout << ( w + w * w % 1000000007 * 2 % 10000000007 ) % 10000000007 << "\n"

	}
	return 0;
}
