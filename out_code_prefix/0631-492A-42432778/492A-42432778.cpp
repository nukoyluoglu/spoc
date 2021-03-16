#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, i, j, x, mohi;
	long long int sum = 0;
	vector<int> v;
	cin >> n;
	for (i = 1; i <= n; i++) 
		{ for (j = 1; j <= i; j++) 
			{ mohi = (j * (j + 1)) / 2;
			sum += mohi;
		}
		if (sum > n) 
			{ x = i;
			break;
		}
		sum = 0;
	}
	if (n == 1)
		{ cout << 1 << endl;
	} else
		{ cout << x - 1 << endl ;

} }
