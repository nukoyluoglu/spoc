#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, a, b, c;
	cin >> n >> a >> b >> c;
	int res = 0;
	for (int i = 0; i <= n / a; i++) 
		{ for (int j = 0; j <= n / b; j++) 
			{ int k = n - i * a - j * b;
			if (k >= 0 && k % c == 0) res = max(res, i + j + k / c);
		}
	}
	cout << res << endl ;

}
