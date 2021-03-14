#include <bits/stdc++.h>

using namespace std;

long long power(long long a, long long b, long long m) 
	{ long long temp = a, ans = 1;
	while (b) 
		{ if (b & 1) ans = (ans % m * temp % m) % m;
		temp = (temp % m * temp % m) % m;
		b /= 2;
	}
	return ans;
}
int main() 
	{ long long n, m;
	cin >> n >> m;
	cout << power ( 3, n, m ) - 1 + m ) % m << endl ;

}
