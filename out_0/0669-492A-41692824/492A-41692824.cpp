#include <bits/stdc++.h>

using namespace std;

int length = 1e5;
int main() 
	{ int n, i, sum = 0;
	cin >> n;
	vector<int> a(n + 1);
	a[0] = 0;
	for (i = 1; i <= n; i++) { a[i] = a[i - 1] + i; }
	for (i = 1; (sum <= n) && (i <= n); i++) { sum += a[i]; }
	if (n == 1) i++;
	cout << i - 2 << endl ;

	return 0;
}
