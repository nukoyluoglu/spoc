#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long int a, b, n, mini, ans = 0;
	cin >> n;
	for (int i = 0; i < n; i++) 
		{ cin >> a;
		ans++;
		if (i == 0 || a < mini) 
			{ mini = a;
			ans = 0;
			b = 0;
		}  else if (a == mini) 
			{ if ((ans < b) || (b == 0)) { b = ans; }
			ans = 0;
		}
	}
	cout << b << endl ;

	return 0;
}
