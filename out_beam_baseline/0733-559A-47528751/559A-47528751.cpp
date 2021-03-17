#include <bits/stdc++.h>

using namespace std;

long long a[6];
int main() 
	{ for (long long i = 0; i < 6; i++) cin >> a[i];
	long long c = 2 * a[0] - 1, ans = 0;
	for (long long i = 0; i < a[1] + a[2]; i++) 
		{ if (i <= a[1] && i <= a[5])
			{ c += 2;
		} else if (i > a[1] && i > a[5])
			{ c -= 2;
		} if (a[1] == a[5] && i == a[1]) c -= 2;
		if (i != a[1] && i == a[5]) c--;
		if (i == a[1] && i != a[5]) c--;
		ans += c;
	}
	cout << ans << endl ;
	return 0;
}
