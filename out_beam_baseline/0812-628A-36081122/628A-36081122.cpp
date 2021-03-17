#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, b, p;
	cin >> n >> b >> p;
	int bottles = 0;
	int towels = n * p;
	while (n > 1) 
		{ int k = 0;
		for (int i = 32 - 1; i >= 0; i--) 
			{ if (n & (1 << i)) 
				{ k = (1 << i);
				break;
			}
		}
		n = (n - k) + k / 2;
		bottles += b * k + k / 2;
	}
	cout << bottles << " " << towels << endl ;
}
