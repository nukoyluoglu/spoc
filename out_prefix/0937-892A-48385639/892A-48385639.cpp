#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n, M, M2, s = 0;
	long long t[100005];
	long long t2[100005];
	cin >> n;
	for (long long i = 0; i < n; i++) 
		{ cin >> t[i];
		s += t[i];
	}
	for (long long i = 0; i < n; i++) { cin >> t2[i]; }
	sort(t2, t2 + n);
	if (s <= t2[n - 1] + t2[n - 2]) 
		{ cout << "YES" << endl;
	}  else
		{ cout << "NO" << endl ;

	} return 0;
}
