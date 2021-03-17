#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	int cur = 0;
	for (int i = 1; i < n; ++i) 
		{ if (i > 1) cout << " ";
		cur += i;
		cur %= n;
		cout << cur + 1;
	}
	cout << endl ;
}
