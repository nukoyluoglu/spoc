#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n, xx;
	cin >> n;
	long long m1 = 0, m2 = 1023;
	long long rr[1024], ss[1024];
	for (long long i = 0; i < 1024; i++) 
		{ rr[i] = i;
		ss[i] = i;
	}
	while (n--) 
		{ char r;
		cin >> r >> xx;
		if (r == '|') 
			{ m1 = m1 | xx;
			m2 = m2 | xx;
			for (long long i = 0; i < 1024; i++) { rr[i] = rr[i] | xx; }
		}  else if (r == '^') 
			{ m1 = m1 ^ xx;
			m2 = m2 ^ xx;
			for (long long i = 0; i < 1024; i++) { rr[i] = rr[i] ^ xx; }
		}  else 
			{ m1 = m1 & xx;
			m2 = m2 & xx;
			for (long long i = 0; i < 1024; i++) { rr[i] = rr[i] & xx; }
		}
	}
	long long x = 0, a = 0, o = 0;
	for (long long i = 0; i < 10; i++) 
		{ long long u = m1 & (1 << i);
		long long v = m2 & (1 << i);
		if (m1 & (1 << i) && v == 0) 
			{ x = x | (1 << i);
			a = a | (1 << i);
		}  else if (u == 0 && m2 & (1 << i)) 
			{ a = a | (1 << i);
		}  else if (m1 & (1 << i) && m2 & (1 << i)) 
			{ a = a | (1 << i);
			o = o | (1 << i);
		}
	}
	cout << "3" << '\n';
	cout << "| " << o << '\n';
	cout << "^ " << x << '\n';
	cout << "&" << a << endl ;

}
