#include <bits/stdc++.h>

using namespace std;

long long f(long long n, long long m) 
	{ if (n == 0) 
		{ return 1 % m;
	}  else if (n == 1) 
		{ return 3 % m;
	}
	long long tmp = f(n / 2, m);
	if (n % 2 == 0) 
		{ return tmp * tmp % m;
	}  else 
		{ return (tmp * tmp % m) * 3 % m;
	}
}
int main() 
	{ int n, m;
	cin >> n >> m;
	long long fx = f(n, m);
	if (fx == 0) 
		{ cout << m - 1 << endl;
	}  else 
		{ cout << fx - 1 << endl ;
	}
	return 0;
}
