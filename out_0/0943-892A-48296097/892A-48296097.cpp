#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;
int main() 
	{ int n;
	cin >> n;
	long long a[N], b[N];
	long long sum = 0;
	for (int i = 0; i < n; i++) 
		{ cin >> a[i];
		sum += a[i];
	}
	for (int i = 0; i < n; i++) cin >> b[i];
	sort(b, b + n, greater<int>());
	if (sum <= (b[0] + b[1]))
		{ cout << "YES" << endl;
	} else
		{ puts ( "NO" ) ;

	} return 0;
}
