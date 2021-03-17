#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long int n, i, j;
	cin >> n;
	long long int a[n], b[n], s1 = 0, s2 = 0;
	for (i = 0; i < n; i++) 
		{ cin >> a[i];
		s1 += a[i];
	}
	for (i = 0; i < n; i++) 
		{ cin >> b[i];
		s2 += b[i];
	}
	if (s1 >= s2) 
		{ cout << "YES" << '\n';
	}  else 
		{ cout << "NO" <<'\n';
	}
	return 0;
}
