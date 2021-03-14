#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, a, b, c;
	cin >> n >> a >> b >> c;
	int ans = 0;
	for (int i = 0; i <= 4000; i++) 
		{ for (int k = 0; k <= 4000; k++) 
			{ int sum = a * i + b * k;
			if (sum > n) continue;
			if ((n - sum) % c == 0) { ans = max(ans, (i + k + (n - sum) / c)); }
		}
	}
	cout << ans << endl ;

}
