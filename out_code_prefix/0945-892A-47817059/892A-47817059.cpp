#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b) 
	{ if (b == 0) return a;
	return gcd(b, a % b);
}
long long lcm(long long a, long long b) 
	{ return a * b / gcd(a, b);
}
int main() 
	{ long long i, j;
	long long n;
	cin >> n;
	vector<long long> a(n), b(n);
	for (long long i = 0; i < (n); i++) cin >> a[i];
	for (long long i = 0; i < (n); i++) cin >> b[i];
	long long sum = 0;
	for (long long i = 0; i < (n); i++) sum += a[i];
	sort(b.begin(), b.end());
	if (sum > b[n - 1] + b[n - 2]) 
		{ cout << "NO" << endl;
	}  else 
		{ cout << "YES" << endl ;

	}
}
