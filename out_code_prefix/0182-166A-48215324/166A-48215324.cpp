#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int a[10000], b[10000], i, j, n, k, ans1, ans2, c;
	cin >> n >> k;
	for (i = 0; i < n; i++) cin >> a[i] >> b[i];
	for (i = 0; i < n; i++) 
		{ for (j = n - 1; j > i; j--) 
			{ if (a[j] > a[j - 1]) 
				{ swap(a[j], a[j - 1]);
				swap(b[j], b[j - 1]);
			}
			if (a[j] == a[j - 1] && b[j] < b[j - 1]) swap(b[j], b[j - 1]);
		}
	}
	ans1 = a[k - 1];
	ans2 = b[k - 1];
	for (i = 0, c = 0; i < n; i++) 
		{ if (ans1 == a[i] && ans2 == b[i]) c++;
	}
	cout << c << endl ;

}
