#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long int n, a[100000], b[100000], c[2] = {0}, k;
	long long int i, j, sum = 0;
	cin >> n;
	for (i = 0; i < n; i++) 
		{ cin >> a[i];
		sum = sum + a[i];
	}
	for (i = 0; i < n; i++) 
		{ cin >> b[i];
		if (b[i] > c[0]) 
			{ c[0] = b[i];
			k = i;
		}
	}
	for (i = 0; i < n; i++) 
		{ if (c[1] < b[i] && b[i] <= c[0] && i != k) c[1] = b[i];
	}
	if (c[1] + c[0] >= sum) 
		{ cout << "YES" << endl;
	}  else 
		{ cout << "NO" << endl ;

	}
	return 0;
}
