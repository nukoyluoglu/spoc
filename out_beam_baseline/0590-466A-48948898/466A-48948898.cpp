#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int TESTS = 1;
	while (TESTS--) 
		{ long long n, m, a, b;
		cin >> n >> m >> a >> b;
		vector<long long int> v;
		if (b >= m * a)
			{ cout << n * a << '\n';
		} else 
			{ long long c = n / m;
			long long ans = c * b;
			n -= c * m;
			ans += min(b, a * n);
			cout << ans <<'\n';
		}
	}
	return 0;
}
