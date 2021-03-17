#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	int a, b, i, cnt = 0, max = 0;
	for (i = 0; i < n; i++) 
		{ cin >> a >> b;
		cnt = cnt + b - a;
		if (cnt > max) max = cnt;
	}
	cout << max << endl ;
	return 0;
}
