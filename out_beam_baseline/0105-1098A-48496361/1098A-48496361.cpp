#include <bits/stdc++.h>

using namespace std;

long long p[200000];
long long s[200000];
int main() 
	{ long long num = 0;
	long long n, i, j;
	cin >> n;
	for (i = 2; i <= n; i++) { cin >> p[i]; }
	for (i = 1; i <= n; i++) 
		{ cin >> s[i];
		if (s[i] == -1) s[i] = 1e10;
	}
	for (i = 1; i <= n; i++) s[p[i]] = min(s[p[i]], s[i]);
	for (i = 1; i <= n; i++) 
		{ if (s[p[i]] > s[i]) 
			{ cout << -1 << endl;
			return 0;
		}
		if (s[i] == 1e10) s[i] = s[p[i]];
		num += s[i] - s[p[i]];
	}
	cout << num << endl ;
	return 0;
}
