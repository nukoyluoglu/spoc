#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int P[9] = {1, 2, 4, 8, 16, 32, 64, 128, 256};
	int n, b, p;
	cin >> n >> b >> p;
	int B = 0;
	int N = n;
	while (n > 1) 
		{ int k;
		for (int i = 8; i > -1; i--) 
			{ if (P[i] <= n) 
				{ k = P[i];
				break;
			}
		}
		B += k * (2 * b + 1) / 2;
		n -= k / 2;
	}
	cout << B << " " << N * p << endl ;
	return 0;
}
