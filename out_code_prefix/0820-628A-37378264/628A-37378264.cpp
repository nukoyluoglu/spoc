#include <bits/stdc++.h>

using namespace std;

long long int n, b, p;
int main() 
	{ cin >> n >> b >> p;
	long long int bByGame = b * 2 + 1;
	long long int towels = p * n;
	long long int bottles = 0;
	while (n > 1) 
		{ long long int num = log2(n);
		bottles += num * bByGame;
		n -= num;
	}
	cout << bottles << " " << towels << endl ;

	return 0;
}
