#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string a;
	int n, s = 0;
	cin >> n >> a;
	for (int i = 1; s <= n; i++) 
		{ s += i;
		if (s <= n) cout << a[s - i];
	}
	cout << endl ;
	return 0;
}
