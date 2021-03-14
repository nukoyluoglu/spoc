#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int i, a, b, j, s, c[1000], d[1000];
	cin >> a >> b;
	for (i = 0; i < b; i++) { cin >> c[i]; }
	sort(c, c + b);
	for (i = 0, j = 0; i < b - a + 1; i++, j++) { d[j] = c[i + a - 1] - c[i]; }
	sort(d, d + b - a + 1);
	cout << d [ 0 ] << endl ;

}
