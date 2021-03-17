#include <bits/stdc++.h>

using namespace std;

long long modl(long long n, long long k, long long p) 
	{ if (n == 0) return 0;
	if (k == 0)
		{ return 1;
	} else if (k % 2 == 0) 
		{ return (modl(n, k / 2, p) * (modl(n, k / 2, p))) % p;
	}  else
		{ return (n * modl(n, k - 1, p)) % p;
} }
int main() 
	{ long long n, m;
	cin >> n >> m;
	long long z = modl(3, n, m);
	if (z == 0)
		{ cout << m - 1 << endl;
	} else
		{ cout << z - 1 << endl ;

	} return 0;
}
