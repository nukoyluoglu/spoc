#include <bits/stdc++.h>

using namespace std;

const int N = 100010;
int a[N];
int main() 
	{ int n;
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	sort(a + 1, a + n + 1);
	cout << a [ ( n + 1 ) / 2 ] << "\n" ;

	return 0;
}
