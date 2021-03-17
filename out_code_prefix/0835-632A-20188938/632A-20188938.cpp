#include <bits/stdc++.h>

using namespace std;

int GCD(int a, int b) 
	{ if (a < b) swap(a, b);
	a %= b;
	if (a == 0)
		{ return b;
	} else
		{ return GCD(a, b);
} }
const int INF = 1000000000;
const long long INF64 = 1e18;
const int N = 2020;
const int M = 2000;
const int MOD = 1000000007;
int main() 
	{ long long n, p;
	cin >> n >> p;
	vector<int> a(n);
	for (int i = 0; i < int(n); i++) 
		{ string s;
		cin >> s;
		if (s == "half")
			{ a[i] = 0;
		} else
			{ a[i] = 1;
	} }
	long long k = 0;
	long long half = 0;
	for (int i = n - 1; i >= 0; i--) 
		{ k = k * 2 + a[i];
		half += a[i];
	}
	long long res = k * p - half * (p / 2);
	cout << res << endl ;

}
