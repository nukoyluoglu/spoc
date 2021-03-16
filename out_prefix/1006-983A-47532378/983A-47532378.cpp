#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b) 
	{ while (b > 0) 
		{ a %= b;
		swap(a, b);
	}
	return a;
}
string sy = "Finite\n";
string sn = "Infinite\n";
map<pair<long long, long long>, char> m;
void solve() 
	{ int n;
	cin >> n;
	for (int i = 0; i < n; i++) 
		{ long long p, q, b;
		cin >> p >> q >> b;
		p %= q;
		long long g = gcd(p, q);
		p /= g;
		q /= g;
		if (p == 0) 
			{ cout << sy;
			continue;
		}
		if (m.find({q, b}) != m.end()) 
			{ if (m[{q, b}])
				{ cout << sy;
			} else
				{ cout << sn;
			} continue;
		}
		long long q1 = q;
		g = gcd(q, b);
		while (g > 1) 
			{ while (q % g == 0) q /= g;
			g = gcd(q, b);
		}
		if (q == 1) 
			{ m[{q1, b}] = true;
			cout << sy;
		}  else 
			{ m[{q1, b}] = false;
			cout << sn;
		}
	}
}
int main() 
	{ srand(555);
	solve ( ) ;

}
