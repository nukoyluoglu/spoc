#include <bits/stdc++.h>

using namespace std;

int a[300000];
int main() 
	{ int n, m1 = 0, m2 = 0, minn = 9999999999, minn2 = 9999999;
	cin >> n;
	for (int i = 1; i <= n; i++) 
		{ cin >> a[i];
		if (minn > a[i]) minn = a[i];
	}
	for (int i = 1; i <= n; i++) 
		{ if (a[i] == minn) 
			{ if (m1 == 0)
				{ m1 = i;
			} else if (m2 == 0) 
				{ m2 = i;
				if (minn2 > m2 - m1) minn2 = m2 - m1;
			}  else 
				{ m1 = m2;
				m2 = i;
				if (minn2 > m2 - m1) minn2 = m2 - m1;
			}
		}
	}
	cout << minn2 << endl ;

	return 0;
}
