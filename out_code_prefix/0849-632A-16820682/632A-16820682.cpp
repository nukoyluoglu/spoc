#include <bits/stdc++.h>

using namespace std;

long long n, p, k = 0;
int main() 
	{ cin >> n >> p;
	vector<bool> a(n);
	for (int i = 0; i < n; ++i) 
		{ string t;
		cin >> t;
		a[i] = t.length() > 4;
		k += a[i];
	}
	double ans = 0;
	long long sum = 0;
	reverse(a.begin(), a.end());
	for (int i = 0; i < n; ++i) 
		{ if (a[i]) 
			{ ans = ans * 2 + 0.5;
			sum += ans * p;
		}  else 
			{ ans *= 2;
			sum += ans * p;
		}
	}
	cout << sum << endl ;

	return 0;
}
