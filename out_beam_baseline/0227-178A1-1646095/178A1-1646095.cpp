#include <bits/stdc++.h>

using namespace std;

int a[100001];
int main() 
	{ int n;
	cin >> n;
	for (int i = 1; i < n + 1; i++) cin >> a[i];
	long long res = 0;
	int t;
	for (int i = 1; i < n; i++) 
		{ for (t = 1; i + t <= n; t *= 2)
			{ ;
		} t >>= 1;
		res += a[i];
		a[i + t] += a[i];
		cout << res << endl ;
	}
	return 0;
}