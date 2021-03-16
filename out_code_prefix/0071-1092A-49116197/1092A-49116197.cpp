#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int t;
	cin >> t;
	while (t--) 
		{ int n, k;
		cin >> n >> k;
		int flag = 0;
		for (int i = 0; i < (n / k); i++) 
			{ for (int j = 0; j < k; j++) 
				{ cout << char(97 + j);
				flag = j;
			}
		}
		for (int i = 0; i < n - (n / k) * k; i++) { cout << char(97 + flag); }
		cout << endl ;

	}
}
