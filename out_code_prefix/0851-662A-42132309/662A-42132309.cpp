#include <bits/stdc++.h>

using namespace std;

long long c[500005], s, bit[100], origin[100];
int main() 
	{ int n;
	cin >> n;
	for (int i = 0; i < n; ++i) 
		{ long long a, b;
		cin >> a >> b;
		s ^= a, c[i] = a ^ b;
	}
	int cnt = 0;
	for (int i = 0; i < n; ++i) 
		{ for (int j = 0; j < cnt; ++j)
			{ if (c[i] & bit[j]) c[i] ^= origin[j];
		} if (c[i]) origin[cnt] = c[i], bit[cnt] = c[i] & -c[i], ++cnt;
	}
	for (int j = 0; j < cnt; ++j)
		{ if (s & bit[j]) s ^= origin[j];
	} if (s)
		{ cout << "1/1" << endl;
	} else
		{ cout << ( 1ll, cnt ) - 1 << endl << /, ( 1LL << cnt) ;

	} return 0;
}
