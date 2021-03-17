#include <bits/stdc++.h>

using namespace std;

string str;
int n, a, b, capacity = 0, total = 0;
int main() 
	{ cin >> n;
	for (int i = 0; i < n; ++i) 
		{ cin >> a >> b;
		total -= a;
		total += b;
		capacity = max(capacity, total);
	}
	cout << capacity << endl ;
	return 0;
}
