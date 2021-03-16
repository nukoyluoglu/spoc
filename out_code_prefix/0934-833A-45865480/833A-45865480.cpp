#include <bits/stdc++.h>

using namespace std;

long long int maxx(long long int &a, long long int &b) 
	{ return a > b ? a : b;
}
long long int minn(long long int &a, long long int &b) 
	{ return a > b ? b : a;
}
void boostIO() {}
long long int gcd(long long int a, long long int b) 
	{ return b == 0 ? a : gcd(b, a % b);
}
int int_gcd(int a, int b) 
	{ return b == 0 ? a : int_gcd(b, a % b);
}
long long int lcm(long long int a, long long int b) 
	{ return a / gcd(a, b) * b;
}
long long int poww(long long int base, long long int exp, long long int mod) 
	{ base %= mod;
	long long int result = 1;
	while (exp > 0) 
		{ if (exp & 1) result = (result * base) % mod;
		base = (base * base) % mod;
		exp >>= 1;
	}
	return result;
}
int cube_root(long long int x) 
	{ long long int l = 1, r = 1e6 + 10;
	while (l < r) 
		{ long long int mid = (l + r) >> 1;
		if (mid * mid * mid >= x) 
			{ r = mid;
		}  else 
			{ l = mid + 1;
		}
	}
	if (l * l * l == x) { return l; }
	return -1;
}
int main() 
	{ boostIO();
	int t;
	cin >> t;
	while (t--) 
		{ long long int a, b;
		cin >> a >> b;
		int value = cube_root(a * b);
		if (value != -1) 
			{ long long int g = gcd(a, b);
			if (g % value == 0) 
				{ puts("Yes");
				continue;
			}
		}
		puts ( "NO" ) ;

	}
}
