#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, k;
	while (cin >> n >> k) 
		{ long long temp = 0;
		long long a;
		int j = 1;
		for (int i = 1; i <= n; i++) 
			{ cin >> a;
			if (temp - (i - 1) * (n - i) * a < k) 
				{ cout << j << endl;
				i--, n--;
			}  else
				{ temp += (i - 1) * a;
			} j ++ ;

		}
	}
	return 0;
}
