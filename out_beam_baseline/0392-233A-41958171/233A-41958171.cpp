#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n;
	cin >> n;
	if (n % 2 == 1)
		{ cout << -1 << endl;
	} else 
		{ for (long long i = 1; i <= n; i++) 
			{ if (i % 2 == 1)
				{ cout << i + 1;
			} else
				{ cout << i - 1;
			} if (i == n)
				{ cout << endl;
			} else
				{ cout << " " ;
		} }
	}
}
