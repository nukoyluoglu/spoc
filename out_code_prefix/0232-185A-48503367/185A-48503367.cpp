#include <bits/stdc++.h>

using namespace std;

const int oo = 1e9, MD = 1e9 + 7;
long long fastExp(long long b, long long e) 
	{ long long ans = 1;
	while (e > 0) 
		{ if (e & 1) ans = (ans * b) % MD;
		b = (b * b) % MD;
		e >>= 1;
	}
	return ans;
}
int main() 
	{ long long n;
	cin >> n;
	long long ans = (fastExp(4, n) + fastExp(2, n)) % MD;
	ans = (ans * fastExp(2, MD - 2)) % MD;
	cout << ans << endl ;

	return 0;
}
