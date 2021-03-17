#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int a;
	cin >> a;
	int l = 0;
	int m = a;
	for (int i = 0; i < a; i++) 
		{ m = m / 10;
		l = l + 1;
		if (m == 0) { break; }
	}
	for (int k = 1; k <= l; k++) 
		{ int b[k] = {};
		for (int i = 1; i <= k; i++) 
			{ int sum1 = 0;
			b[k - i] = 4;
			for (int j = 0; j < k; j++) { sum1 = 10 * sum1 + b[j]; }
			if (a % sum1 == 0) 
				{ cout << "YES" << endl;
				return 0;
			}
		}
		for (int i = 1; i <= k; i++) 
			{ int sum1 = 0;
			b[k - i] = 7;
			for (int j = 0; j < k; j++) { sum1 = 10 * sum1 + b[j]; }
			if (a % sum1 == 0) 
				{ cout << "YES" << endl;
				return 0;
			}
		}
		for (int j = 0; j < k; j++) { b[j] = 0; }
		for (int i = 1; i <= k; i++) 
			{ int sum1 = 0;
			b[k - i] = 7;
			for (int j = 0; j < k; j++) { sum1 = 10 * sum1 + b[j]; }
			if (a % sum1 == 0) 
				{ cout << "YES" << endl;
				return 0;
			}
		}
		for (int i = 1; i <= k; i++) 
			{ int sum1 = 0;
			b[k - i] = 4;
			for (int j = 0; j < k; j++) { sum1 = 10 * sum1 + b[j]; }
			if (a % sum1 == 0) 
				{ cout << "YES" << endl;
				return 0;
			}
		}
	}
	cout << "NO" << endl ;
}
