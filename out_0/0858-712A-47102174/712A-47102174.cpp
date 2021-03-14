#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	long long a[100050];
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 1; i < n; i++) cout << a[i] + a[i - 1] << " ";
	cout << a [ n - 1 ] << endl ;

	return 0;
}
