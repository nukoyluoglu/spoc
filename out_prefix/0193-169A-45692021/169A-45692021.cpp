#include <bits/stdc++.h>

using namespace std;

int n, a, b;
int x[2005];
int main() 
	{ cin >> n >> a >> b;
	for (int i = 0; i < n; i++) cin >> x[i];
	sort(x, x + n);
	cout << x [ b ] - x [ a - 1 ] <<'\n';

}
