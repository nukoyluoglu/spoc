#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int i, j, l, x, m, m1, k = 0, res = 0;
	cin >> x;
	int a[1000] = {0};
	for (j = 4; j <= 1000; j++) 
		{ i = j;
		m = 0, m1 = 0;
		while (i > 0) 
			{ l = i % 10;
			if (l == 4 || l == 7) m++;
			i = i / 10;
			m1++;
		}
		if (m == m1) 
			{ a[k] = j;
			k++;
		}
	}
	for (i = 0; i < k; i++) 
		{ if (x % a[i] == 0) 
			{ res = 5;
			break;
		}
	}
	if (res == 5)
		{ cout << "YES" << endl;
	} else
		{ cout << "NO" << endl ;
	} return 0;
}
