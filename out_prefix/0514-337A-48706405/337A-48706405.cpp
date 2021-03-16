#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, m;
	while (cin >> n >> m) 
		{ int a[55];
		for (int i = 0; i < m; i++) cin >> a[i];
		sort(a, a + m);
		int min2 = 999999999, t;
		for (int i = n - 1; i < m; i++) 
			{ t = a[i] - a[i - n + 1];
			if (min2 > t) min2 = t;
		}
		cout << min2 << endl ;

	}
}
