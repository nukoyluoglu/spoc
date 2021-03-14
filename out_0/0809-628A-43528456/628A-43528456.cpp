#include <bits/stdc++.h>

using namespace std;

void solve();
void speed_up() {}
int main() 
	{ speed_up();
	solve();
	return 0;
}
void solve() 
	{ long long n, b, p;
	cin >> n >> b >> p;
	long long y = n * p;
	long long sor = 0;
	while (n > 1) 
		{ long long st = 2;
		while (st * 2 <= n) st *= 2;
		sor += (st / 2) * (b * 2 + 1);
		n -= st / 2;
	}
	cout << sor ( y ) << endl ;

}
