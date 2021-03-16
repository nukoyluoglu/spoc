#include <bits/stdc++.h>

using namespace std;

string s;
int i, j, arr[10000];
int main() 
	{ int a, b, c, d, t, cnt = 0, cn = 0;
	cin >> t;
	for (int k = 1; k <= t; k++) { cin >> arr[k]; }
	cin >> a >> b;
	if (a > b) { swap(a, b); }
	for (i = a; i < b; i++) { cnt += arr[i]; }
	for (i = b;; i++) 
		{ if (i == a) break;
		cn += arr[i];
		if (i == t) { i = 0; }
	}
	if (cnt > cn)
		{ cout << cn << endl;
	} else 
		{ cout << cnt << endl ;

	}
	return 0;
}
