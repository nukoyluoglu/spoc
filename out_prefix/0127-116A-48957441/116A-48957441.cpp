#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	int a[n], b[n];
	for (int i = 0; i < n; i++) { cin >> a[i] >> b[i]; }
	int curr = 0;
	int req = 0;
	for (int i = 0; i < n; i++) 
		{ curr -= a[i];
		curr += b[i];
		if (curr > req) { req = curr; }
	}
	cout << req << endl ;

	return 0;
}
