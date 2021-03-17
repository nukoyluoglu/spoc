#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int a, b, n, i;
	cin >> n >> a >> b;
	int C[n];
	for (i = 0; i < n; i++) cin >> C[i];
	sort(C, C + n);
	cout <<C [ b ] - C [ b - 1 ] << endl ;
}
