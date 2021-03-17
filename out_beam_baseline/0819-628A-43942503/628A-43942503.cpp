#include <bits/stdc++.h>

using namespace std;

void fast() {}
long long mn = 1e9;
void lucky(long long a, long long c, int b) 
	{ if (a > 1e11) return;
	if (a >= b && c == 0) mn = min(mn, a);
	lucky(a * 10 + 7, c - 1, b);
	lucky(a * 10 + 4, c + 1, b);
}
int n;
void fff(string s, int c) 
	{ if (s.size() == 2 * n) 
		{ if (c == 0) cout << s << endl;
		return;
	}
	fff(s + "(", c + 1);
	if (c > 0) fff(s + ")", c - 1);
}
long long toint(string s) 
	{ long long a = 0, c = 1;
	;
	for (int i = 0; i < s.size(); i++) 
		{ a += (s[s.size() - i - 1] - '0') * c;
		c *= 10;
	}
	return a;
}
int main() 
	{ fast();
	long long a, b = 0, c = 0, d = 1, sum = 0, x = 0;
	string s, ss = "";
	cin >> a >> b >> c;
	d = a;
	while (a > 1) 
		{ x = a / 2;
		a -= x;
		while (x--) sum += ((2 * b) + 1);
	}
	cout << sum << " " << d * c << "\n" ;
	return 0;
}
