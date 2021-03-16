#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, m, p;
	cin >> n >> m >> p;
	int ans = 0;
	int c = n;
	while (n != 1) 
		{ ans += n / 2;
		n -= n / 2;
	}
	cout << ans * ( m * 2 + 1 ), c * p << " " ;

}
