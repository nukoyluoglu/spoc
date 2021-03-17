#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, res = 0;
	cin >> n;
	int total = 0;
	while (total < n) 
		{ res++;
		total += res * (res + 1) / 2;
	}
	if (total > n) { res--; }
	cout << res << endl ;
	return 0;
}
