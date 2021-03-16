#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long a, b;
	cin >> a >> b;
	if (a == 0) 
		{ cout << -1 * b * b << endl;
		for (int(i) = (0); (i) < (b); ++(i)) cout << 'x';
		cout << endl;
	}  else if (b == 0) 
		{ cout << a * a << endl;
		for (int(i) = (0); (i) < (a); ++(i)) cout << 'o';
		cout << endl;
	}  else if (b == 1) 
		{ cout << a * a - 1 << endl;
		for (int(i) = (0); (i) < (a); ++(i)) cout << 'o';
		cout << 'x';
		cout << endl;
	}  else 
		{ long long ret = LLONG_MIN;
		long long foo = 0;
		for (long long j = 1; j <= min(b - 1, a); j++) 
			{ long long pos = (a - j + 1) * (a - j + 1) + (j - 1);
			long long q = b / (j + 1), r = b % (j + 1);
			long long neg = r * (q + 1) * (q + 1) + (j + 1 - r) * q * q;
			if (pos - neg > ret) 
				{ ret = pos - neg;
				foo = j + 1;
			}
		}
		cout << ret << endl;
		long long q = b / foo, r = b % foo;
		long long g = (a - (foo - 1) + 1);
		for (int(j) = (1); (j) < (foo + 1); ++(j)) 
			{ for (int(i) = (0); (i) < (q); ++(i)) cout << 'x';
			if (j <= r) cout << 'x';
			if (j != foo) 
				{ if (j == 1)
					{ for (int(i) = (0); (i) < (g); ++(i)) cout << 'o';
				} else
					{ cout << 'o';
			} }
		}
		cout << endl ;

	}
	return 0;
}
