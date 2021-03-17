#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, b, p;
	cin >> n >> b >> p;
	int fp = n * p;
	int m = 0;
	while (n > 1) 
		{ int po = floor(log2(n));
		int compete = pow(2, po);
		int diff = n - pow(2, po);
		m += compete / 2;
		n = compete / 2 + diff;
	}
	int fb = m * 2 * b + m;
	cout << fb << " " << fp << endl ;
	return 0;
}
