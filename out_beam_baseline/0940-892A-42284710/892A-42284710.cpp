#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long cans, sum = 0, aux;
	cin >> cans;
	long long val[cans + 2];
	for (int i = 0; i < cans; i++) 
		{ cin >> aux;
		sum += aux;
	}
	for (int i = 0; i < cans; i++) cin >> val[i];
	sort(val, val + cans);
	if (sum <= val[cans - 1] + val[cans - 2])
		{ cout << "YES\n";
	} else
		{ cout << "NO\n" ;
	} return 0;
}
