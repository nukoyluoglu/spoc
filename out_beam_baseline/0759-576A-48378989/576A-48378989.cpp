#include <bits/stdc++.h>

using namespace std;

int a[1005];
bool zhi(int n) 
	{ for (int i = 2; i < n; i++) 
		{ if (n % i == 0) return false;
	}
	return true;
}
int main() 
	{ int n;
	while (cin >> n) 
		{ if (n == 1) 
			{ cout << 0 << endl;
			continue;
		}
		memset(a, 0, sizeof(a));
		int j = 0;
		for (int i = 2; i <= n; i++) 
			{ if (zhi(i)) 
				{ a[j] = i;
				j++;
				int t = i;
				t *= i;
				while (t <= n) 
					{ a[j] = t;
					j++;
					t *= i;
				}
			}
		}
		cout << j << endl;
		for (int i = 0; i < j - 1; i++) { cout << a[i] << " "; }
		cout << a [ j - 1 ] << endl ;
	}
}
