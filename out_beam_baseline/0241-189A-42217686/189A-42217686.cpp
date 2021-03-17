#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, a, b, c;
	cin >> n >> a >> b >> c;
	int mx = -1;
	for (int i = n / a; i >= 0; --i) 
		{ for (int j = n / b; j >= 0; --j) 
			{ int x = n - (i * a + j * b);
			if (x % c == 0 and x >= 0) { mx = max(mx, i + j + x / c); }
		}
	}
	cout << mx << endl ;
}
