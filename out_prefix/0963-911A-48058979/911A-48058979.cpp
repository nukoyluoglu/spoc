#include <bits/stdc++.h>

using namespace std;

long long a[100005];
int main() 
	{ long long n, mi = 1000000007;
	cin >> n;
	for (long long i = 1; i < n + 1; i++) 
		{ cin >> a[i];
		mi = min(mi, a[i]);
	}
	long long j = -1000000007, ans = 1000000007;
	for (long long i = 1; i < n + 1; i++) 
		{ if (a[i] == mi) 
			{ ans = min(ans, i - j);
			j = i;
		}
	}
	cout << ans << endl ;

	return 0;
}
