#include <bits/stdc++.h>

using namespace std;

long long n, k, a, sum, l;
int main() 
	{ cin >> n >> k;
	for (long long i = 1; i <= n; i++) 
		{ cin >> a;
		if (i != 1) 
			{ if (sum - (n - i) * (i - 1) * a < k) 
				{ cout << i + l << endl;
				i--;
				n--;
				l++;
			}  else
				{ sum += a * ( i - 1 ) ;

		} }
	}
}
