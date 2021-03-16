#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long int n, a, b, c[2555], m;
	cin >> n >> a >> b;
	for (int i = 0; i < n; i++) cin >> c[i];
	sort(c, c + n);
	m = c[b] - c[b - 1];
	cout << m << endl ;

}
