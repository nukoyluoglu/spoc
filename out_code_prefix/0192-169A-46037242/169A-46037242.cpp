#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long int n, a, b, i;
	cin >> n >> a >> b;
	long long int p[n];
	for (i = 0; i < n; i++) cin >> p[i];
	sort(p, p + n);
	long long int x = p[n - a] - p[b - 1];
	cout << x << endl ;

}
