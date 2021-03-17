#include <bits/stdc++.h>

using namespace std;

const int max4 = 10004;
const int maxx = 200005;
const int max6 = 1000006;
const int lg5 = 17;
const int INF = 1000000007;
const long long INFLL = 4LL * 1000000000 * 1000000000;
int powmod(int a, int b, int mod) 
	{ int res = 1;
	a %= mod;
	for (; b; b >>= 1) 
		{ if (b & 1) { res = 1LL * res * a % mod; }
		a = 1LL * a * a % mod;
	}
	return res;
}
int gcd(int a, int b) 
	{ while (b > 0) 
		{ int t = a % b;
		a = b, b = t;
	}
	return a;
}
int lcm(int a, int b) 
	{ return (a / gcd(a, b)) * b;
}
int is_prime(int n) 
	{ if (n <= 1 || n > 3 && (n % 2 == 0 || n % 3 == 0)) return 0;
	for (int i = 5, t = 2; i * i <= n; i += t, t = 6 - t)
		{ if (n % i == 0) return 0;
	} return 1;
}
int n, arr[maxx], pref[maxx], suff[maxx];
int main() 
	{ cin >> n;
	if (n == 1) { return cout << 1 << '\n', 0; }
	for (int i = 1; i <= n; i++) { cin >> arr[i]; }
	for (int i = 1; i <= n; i++) 
		{ if (arr[i] > arr[i - 1]) 
			{ pref[i] = pref[i - 1] + 1;
		}  else 
			{ pref[i] = 1;
		}
	}
	for (int i = n; i >= 1; i--) 
		{ if (i == n || arr[i] < arr[i + 1]) 
			{ suff[i] = suff[i + 1] + 1;
		}  else 
			{ suff[i] = 1;
		}
	}
	int res = 2;
	for (int i = 2; i < n; i++) 
		{ if (arr[i + 1] > arr[i - 1] + 1) { res = max(res, pref[i - 1] + suff[i + 1] + 1); }
	}
	for (int i = 2; i < n; i++) { res = max(res, max(pref[i], suff[i]) + 1); }
	cout << res <<'\n';

	return 0;
}
