#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, a[3];
	cin >> n >> a[0] >> a[1] >> a[2];
	sort(a, a + 3);
	int i = 0, j = 0, k = 0, ans = -1;
	for (i = 0; i * a[2] < n + 1; i++) 
		{ for (j = 0; i * a[2] + j * a[1] < n + 1; j++) 
			{ if ((n - i * a[2] - j * a[1]) % a[0] == 0) { ans = max(ans, i + j + (n - i * a[2] - j * a[1]) / a[0]); }
		}
	}
	cout << ans << endl ;
}
