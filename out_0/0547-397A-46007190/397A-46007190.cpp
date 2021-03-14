#include <bits/stdc++.h>

using namespace std;

int v[105];
int main() 
	{ long long n, sum = 0;
	cin >> n;
	int x, y;
	cin >> x >> y;
	for (int i = 2; i <= n; ++i) 
		{ int a, b;
		cin >> a >> b;
		for (int j = a + 1; j <= b; ++j) v[j] = 1;
	}
	for (int i = x + 1; i <= y; ++i) sum += 1 - v[i];
	cout << sum << "\n" ;

	return 0;
}
