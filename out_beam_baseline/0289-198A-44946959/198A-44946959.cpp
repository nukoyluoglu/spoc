#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long k, b, n, t;
	cin >> k >> b >> n >> t;
	long long sum = 1;
	int cnt = 0;
	while (sum <= t) 
		{ sum = sum * k + b;
		cnt++;
	}
	if (cnt > n)
		{ cout << 0 << endl;
	} else
		{ cout << n - cnt + 1 << endl ;
	} return 0;
}
