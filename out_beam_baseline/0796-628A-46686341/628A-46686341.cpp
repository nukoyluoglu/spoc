#include <bits/stdc++.h>

using namespace std;

map<long long int, long long int> m1;
map<long long int, long long int>::iterator itr;
int main() 
	{ long long int n, b, p;
	cin >> n >> b >> p;
	long long int ans2 = n * p;
	long long int ans1 = 0;
	while (n > 1) 
		{ long long int i;
		for (i = 0;; i++) 
			{ if (pow(2, i) > n) break;
		}
		i--;
		long long int z = pow(2, i);
		ans1 += (z / 2) * (2 * b + 1);
		n = n - z / 2;
	}
	cout << ans1 << " " << ans2 << endl ;
	return 0;
}
