#include <bits/stdc++.h>

using namespace std;

long long p, q, k;
long long gcd(long long a, long long b) 
	{ return b == 0 ? a : gcd(b, a % b);
}
inline long long rd() 
	{ long long x = 0, f = 1;
	char ch = getchar();
	while (ch > '9' || ch < '0') 
		{ if (ch == '-') f = -1;
		ch = getchar();
	}
	while (ch >= '0' && ch <= '9') 
		{ x = (x << 1) + (x << 3) + ch - '0';
		ch = getchar();
	}
	return x * f;
}
inline void solve() 
	{ p = rd(), q = rd(), k = rd();
	long long t = gcd(p, q);
	q /= t;
	while ((t = gcd(k, q)) != 1) 
		{ while (q % t == 0) q /= t;
	}
	puts(q == 1 ? "Finite" : "Infinite");
}
int main() 
	{ for ( long long T = rd ( T ) ; T ; T -- ) solve ( ) ;

	return 0;
}
