#include <bits/stdc++.h>

using namespace std;

char xx[1000002];
int main() 
	{ int n, k;
	while (cin >> n >> k) 
		{ if (n < k || (n >= 2 && k < 2))
			{ cout << "-1" << endl;
		} else 
			{ int a = k - 2;
			int t = 0;
			memset(xx, 0, sizeof(xx));
			for (int i = 0; i < n; i++) 
				{ if (i < n - (k - 2)) 
					{ if (i % 2 == 0)
						{ xx[i] = 'a';
					} else
						{ xx[i] = 'b';
				} }  else 
					{ if (i < n) 
						{ xx[i] = 99 + t;
						t++;
					}
				}
			}
			cout << xx << endl ;
		}
	}
	return 0;
}
