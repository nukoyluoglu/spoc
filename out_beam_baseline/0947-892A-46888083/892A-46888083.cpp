#include <bits/stdc++.h>

using namespace std;

long long a[100010], b[100010];
bool cmp(int a, int b) 
	{ return a > b;
}
int main() 
	{ int n, i, j;
	while (cin >> n) 
		{ memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		double sum = 0;
		for (i = 0; i < n; i++) 
			{ cin >> a[i];
			sum += a[i];
		}
		for (i = 0; i < n; i++) { cin >> b[i]; }
		sort(b, b + i, cmp);
		if (b[0] + b[1] >= sum)
			{ cout << "YES" << endl;
		} else
			{ cout << "NO" << endl ;
	} }
	return 0;
}
