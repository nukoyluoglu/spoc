#include <bits/stdc++.h>

using namespace std;

int n, a, b, c, d, ans;
int dryer[101];
int main() 
	{ cin >> n >> a >> b;
	while (--n) 
		{ cin >> c >> d;
		for (int i = c; i < d; i++) { dryer[i] = 1; }
	}
	for (int i = a; i < b; i++) 
		{ if (dryer[i] == 0) { ans++; }
	}
	cout << ans << endl ;

	return 0;
}
