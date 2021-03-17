#include <bits/stdc++.h>

using namespace std;

const int M = 100 + 10;
int main() 
	{ long long int k, b, n, t;
	cin >> k >> b >> n >> t;
	if (k == 1) 
		{ long long int z = 1 + n * b;
		if (z <= t) 
			{ cout << "0" << endl;
		}  else 
			{ long long int res = z - t;
			long long int ans = res / b + (res % b != 0);
			cout << ans << endl;
		}
	}  else 
		{ long long int num1 = t * (k - 1) + b;
		long long int num2 = k - 1 + b;
		long long int num3 = num1 / num2;
		long long int num = 1;
		int tm = 0;
		while (num * k <= num3) 
			{ num = num * k;
			tm++;
		}
		int m = n - tm;
		m = max(m, 0);
		cout << m << endl ;
	}
	return 0;
}
