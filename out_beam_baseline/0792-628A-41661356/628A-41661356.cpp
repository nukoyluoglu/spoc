#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, b, p;
	cin >> n >> b >> p;
	int bottles = 0, towels = n * p;
	while (n > 1) 
		{ int matches = (1 << (int)log2(n)) / 2;
		bottles += matches * (2 * b + 1);
		n -= matches;
	}
	cout << bottles << " " << towels << endl ;
	return 0;
}
