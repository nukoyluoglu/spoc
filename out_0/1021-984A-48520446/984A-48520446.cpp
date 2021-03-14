#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e3 + 10;
int main() 
	{ int n;
	int a[maxn];
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	sort(a + 1, a + n + 1);
	cout << a [ ( n + 1 ) / 2 ] << endl ;

	return 0;
}
