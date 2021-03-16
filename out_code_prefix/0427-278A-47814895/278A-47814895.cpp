#include <bits/stdc++.h>

using namespace std;

long long int choose(long long int n, long long int m) 
	{ long long int ans = 0;
	long long int num = 1;
	long long int den = 1;
	for (long long int i = 0; i < m; i++) 
		{ num *= (n - i);
		num = num / (i + 1);
	}
	return num;
}
bool isPrime(int n) 
	{ if (n <= 1) return false;
	if (n <= 3) return true;
	if (n % 2 == 0 || n % 3 == 0) return false;
	for (int i = 5; i * i <= n; i = i + 6) 
		{ if (n % i == 0 || n % (i + 2) == 0) return false;
	}
	return true;
}
long long int gcd(long long int a, long long int b) 
	{ if (a == 0) 
		{ return b;
	}  else 
		{ return gcd(b % a, a);
	}
}
int main() 
	{ long long int i, j, k, n, m, t, c;
	cin >> n;
	vector<long long int> d(n);
	for (i = 0; i < n; i++) { cin >> d[i]; };
	long long int s;
	cin >> s >> t;
	if (s > t) 
		{ m = s;
		s = t;
		t = m;
	}
	long long int ans1 = 0, ans2 = 0;
	for (i = s - 1; i < t - 1; i++) { ans1 += d[i]; }
	i = t - 1;
	while (i != s - 1) 
		{ ans2 += d[i];
		i++;
		if (i == n) i = 0;
	}
	cout << min ( ans1, ans2 ) << endl ;

	return 0;
}
