#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int a, n, b, c;
	char s[8];
	char w[8] = "jolteon", q[8] = "flareon";
	char v[8] = "umbreon", z[8] = "leafeon", l[8] = "glaceon", m[8] = "sylveon";
	cin >> n;
	cin >> s;
	if (n == 8) 
		{ cout << "vaporeon" << endl;
	}  else if (n == 6) 
		{ cout << "espeon" << endl;
	}  else 
		{ a = 0;
		b = 0;
		c = 0;
		int d = 0;
		int e = 0;
		int f = 0;
		for (int i = 0; i < 8; i++) 
			{ if (s[i] == w[i]) { a++; }
		}
		for (int i = 0; i < 8; i++) 
			{ if (s[i] == q[i]) { b++; }
		}
		for (int i = 0; i < 8; i++) 
			{ if (s[i] == v[i]) { c++; }
		}
		for (int i = 0; i < 8; i++) 
			{ if (s[i] == z[i]) { d++; }
		}
		for (int i = 0; i < 8; i++) 
			{ if (s[i] == l[i]) { e++; }
		}
		for (int i = 0; i < 8; i++) 
			{ if (s[i] == m[i]) { f++; }
		}
		if (a > b && a > c && a > d && a > e && a > f) 
			{ cout << "jolteon" << endl;
		}  else if (b > a && b > c && b > d && b > e && b > f) 
			{ cout << "flareon" << endl;
		}  else if (c > a && c > b && c > d && c > e && c > f) 
			{ cout << "umbreon" << endl;
		}  else if (d > a && d > c && d > b && d > e && d > f) 
			{ cout << "leafeon" << endl;
		}  else if (e > a && e > c && e > d && e > b && e > f) 
			{ cout << "glaceon" << endl;
		}  else if (f > a && f > c && f > d && f > e && f > b) 
			{ puts ( "sylveon" ) ;

		}
	}
	return 0;
}
