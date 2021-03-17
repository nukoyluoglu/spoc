#include <bits/stdc++.h>

using namespace std;

int a, n, p = 1000000007;
long long fastmod(long long a, long long n) 
	{ if (n == 1) { return a; }
	long long ans = fastmod(a, n / 2) % p;
	if (n % 2 == 0) 
		{ return ans % p * ans % p;
	}  else 
		{ return ans % p * ans % p * a % p;
	}
}
int main() 
	{ long long k;
	cin >> k;
	if (k >= 2) 
		{ long long t = fastmod(2, k - 1);
		cout << (t + 2 * t * t % p) % p << endl;
	}  else if (k == 1) 
		{ cout << 3 << endl;
	}  else 
		{ cout << 1 << endl ;
	}
	return 0;
}
