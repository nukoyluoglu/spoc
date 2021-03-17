#include <bits/stdc++.h>

using namespace std;

long long m, n;
long long pw(long long a, long long b) 
	{ long long res = 1;
	while (b) 
		{ if (b & 1) res = (res * a) % m;
		a = (a * a) % m;
		b /= 2;
	}
	return res;
}
int main() 
	{ cin >> n >> m;
	long long ans = (pw(3, n));
	ans--;
	if (ans < 0) ans += m;
	cout << ans << endl ;
	return 0;
}
