#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n, k, sum = 0, cur = 0;
	cin >> n >> k;
	for (long long i = 1; i <= n; i++) 
		{ int a;
		cin >> a;
		if (i > 1 && sum - (i - cur - 1) * (n - i) * a < k) 
			{ cout << i << endl;
			cur++;
		}  else
			{ sum += a * ( i - cur - 1 ) ;
	} }
}
