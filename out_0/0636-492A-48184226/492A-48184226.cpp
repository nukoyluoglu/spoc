#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, s = 0;
	cin >> n;
	for (int i = 1;; i++) 
		{ if (s > n) 
			{ cout << i - 2 << "\n";
			break;
		}  else 
			{ s += ( i * ( i + 1 ) ) / 2 ;

		}
	}
}
