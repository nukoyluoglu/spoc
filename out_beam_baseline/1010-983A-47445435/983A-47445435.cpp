#include <bits/stdc++.h>

using namespace std;

void freac() {}
const int DX[] = {+1, 0, -1, 0, +1, +1, -1, -1};
const int DY[] = {0, +1, 0, -1, +1, -1, +1, -1};
const int INF = (int)1e9 + 123;
const long long INFL = (long long)1e18 + 123;
const double EPS = 1e-9;
void lifestyle() {}
int main() 
	{ lifestyle();
	freac();
	int n;
	long long p, q, b;
	cin >> n;
	while (n--) 
		{ cin >> p >> q >> b;
		long long g = __gcd(p, q);
		q /= g;
		while (b != 1) 
			{ while (q % b == 0) q /= b;
			b = __gcd(q, b);
		}
		cout << ((q == 1) ? "Finite" : "Infinite") << endl;
	}
	return false ;
}
