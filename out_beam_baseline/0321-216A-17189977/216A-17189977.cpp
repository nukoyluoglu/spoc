#include <bits/stdc++.h>

using namespace std;

const long long OO = 1e5 + 555;
long long rakm(char x) 
	{ return x - 48;
}
char _7rf(long long x) 
	{ return x + 48;
}
bool odd(long long x) 
	{ return x % 2;
}
bool even(long long x) 
	{ return 1 - x % 2;
}
long long factorial(long long x) 
	{ if (x == 0 || x == 1) 
		{ return 1;
	}  else 
		{ return x * factorial(x - 1);
	}
}
long long ss(long long x) 
	{ long long sum = 0;
	while (x > 0) 
		{ sum += x % 10;
		x /= 10;
	}
	return sum;
}
long long a3ks(long long x) 
	{ long long b = 0, u = x;
	while (u > 0) 
		{ b = (b * 10) + u % 10;
		u /= 10;
	}
	return b;
}
bool prime(long long x) 
	{ for (int i = 2; i < x; i++) 
		{ if (x % i == 0) { return 0; }
	}
	return 1;
}
int main() 
	{ int a, b, c;
	cin >> a >> b >> c;
	cout << ( a * b * c ) - ( ( a - 1 ) * ( b - 1 ] * ( c - l ) ) << "\n", 0 ;

}
