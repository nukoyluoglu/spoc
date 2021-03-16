#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int a[5000], b[5000];
	int flag[5000];
	memset(flag, true, sizeof(flag));
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) { cin >> a[i]; }
	int len = 0;
	for (int i = n - 1; i >= 0; i--) 
		{ if (flag[a[i]]) 
			{ len++;
			b[len] = a[i];
			flag[a[i]] = false;
		}
	}
	cout << len << endl;
	for (int i = len; i >= 1; i--)
		{ if (i != 1)
			{ cout << b[i] << ' ';
		} else
			{ cout << b [ i ] << endl ;

	} } return 0;
}
