#include <bits/stdc++.h>

using namespace std;

map<long long, long long> me;
long long fine[100000 + 5];
void pre() 
	{ for (long long i = 2; i <= 100000; i++) 
		{ if (fine[i] == 0) 
			{ for (long long j = 2 * i; j <= 100000; j += i) { fine[j] = 1; }
		}
	}
}
long long fact[100000], invfact[100000];
long long pow(long long a, long long b, long long m) 
	{ long long ans = 1;
	while (b) 
		{ if (b & 1) ans = (ans * a) % m;
		b /= 2;
		a = (a * a) % m;
	}
	return ans;
}
long long modinv(long long k) 
	{ return pow(k, 1000000007 - 2, 1000000007);
}
void precompute() 
	{ fact[0] = fact[1] = 1;
	for (long long i = 2; i < 100000; i++) 
		{ fact[i] = fact[i - 1] * i;
		fact[i] %= 1000000007;
	}
	invfact[100000 - 1] = modinv(fact[100000 - 1]);
	for (long long i = 100000 - 2; i >= 0; i--) 
		{ invfact[i] = invfact[i + 1] * (i + 1);
		invfact[i] %= 1000000007;
	}
}
long long nCr(long long x, long long y) 
	{ if (y > x) return 0;
	long long num = fact[x];
	num *= invfact[y];
	num %= 1000000007;
	num *= invfact[x - y];
	num %= 1000000007;
	return num;
}
int main() 
	{ long long n;
	cin >> n;
	precompute();
	pre();
	for (long long i = 1; i <= n; i++) 
		{ long long temp;
		cin >> temp;
		for (long long j = 2; j <= 100000; j++) 
			{ long long cur = 0;
			if (temp <= 1) break;
			while (temp % j == 0 && temp > 1) 
				{ cur++;
				temp /= j;
			}
			if (cur != 0) me[j] += cur;
		}
		if (temp != 1) me[temp] += 1;
	}
	map<long long, long long>::iterator it;
	long long ans = 1;
	for (it = me.begin(); it != me.end(); it++) 
		{ long long temp = it->second;
		ans *= nCr(temp + n - 1, temp);
		ans %= 1000000007;
	}
	cout << ans << endl ;

	return 0;
}
