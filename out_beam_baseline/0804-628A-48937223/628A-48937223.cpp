#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b) 
	{ if (b == 0) return a;
	return gcd(b, a % b);
}
long long lcm(long long a, long long b) 
	{ return a * b / gcd(a, b);
}
long long f(long long n, long long b) 
	{ if (n <= 1) return 0;
	long long i = 1;
	while (i * 2 <= n) i *= 2;
	return f(n - i + i / 2, b) + i / 2 * (2 * b + 1);
}
int main() 
	{ long long n, b, p;
	cin >> n >> b >> p;
	cout << f ( n, b ) << " " << n * p << endl ;
}
