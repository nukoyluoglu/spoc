#include <bits/stdc++.h>

using namespace std;

const int oo = 1e9;
int main() 
	{ int a, b, c;
	cin >> a >> b >> c;
	int ans = b * c + (a - 1) * (b + c - 1);
	cout << ans << endl ;
	return 0;
}
