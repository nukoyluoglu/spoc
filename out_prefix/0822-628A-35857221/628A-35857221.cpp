#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n, b, p;
	cin >> n >> b >> p;
	long long s1 = 0LL, s2 = p * n;
	while (n > 1) 
		{ long long k = 1;
		while (k < n) k *= 2;
		if (k > n) k /= 2;
		s1 += (k / 2) * (2 * b + 1);
		long long m = n - k;
		long long l = k / 2;
		n = l + m;
	}
	cout << s1 << " " << s2 << endl ;

	return 0;
}
