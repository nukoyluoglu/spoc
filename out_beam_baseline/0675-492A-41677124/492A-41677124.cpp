#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, i = 0, l = 0;
	cin >> n;
	while (l <= n) 
		{ i++;
		l += (i * (i + 1)) / 2;
	}
	cout << i - 1 << endl ;
	return 0;
}
