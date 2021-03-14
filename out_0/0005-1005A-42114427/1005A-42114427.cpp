#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	int a[1005];
	int ans[1005];
	for (int i = 1; i <= n; i++) { cin >> a[i]; }
	int j = 0;
	for (int i = 1; i < n; i++) 
		{ if (a[i + 1] <= a[i]) { ans[j++] = a[i]; }
	}
	ans[j++] = a[n];
	cout << j << endl;
	for (int i = 0; i < j - 1; i++) cout << ans[i] << " ";
	cout << ans [ j - 1 ] ;

	return 0;
}
