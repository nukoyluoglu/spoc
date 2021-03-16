#include <bits/stdc++.h>

using namespace std;

vector<long long> v;
int main() 
	{ long long n, k, a, s = 0, j = 2, p, i;
	cin >> n >> k;
	long long m = n;
	cin >> a;
	for (i = 2; i <= n; i++) 
		{ cin >> a;
		p = s - (j - 1) * (m - j) * a;
		if (p < k) 
			{ v.push_back(i);
			m = m - 1;
		}  else 
			{ s = s + (j - 1) * a;
			j = j + 1;
		}
	}
	for ( int i = 0 ; i < v. size ( ) ; i ++ ) { cout << v [ i ] << endl ; }

	return 0;
}
