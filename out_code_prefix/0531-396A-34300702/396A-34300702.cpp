#include <bits/stdc++.h>

using namespace std;

const int Mod = 1e9 + 7;
int n, p;
long long choose[30000 + 25][600], ans = 1;
map<int, int> Pedy;
int main() 
	{ cin >> n;
	choose[0][0] = 1;
	for (int i = 1; i < 30000 + 25; i++) 
		{ choose[i][0] = 1;
		for (int j = 1; j <= n; j++) choose[i][j] = (choose[i - 1][j - 1] + choose[i - 1][j]) % Mod;
	}
	for (int i = 0; i < n; i++) 
		{ cin >> p;
		for (int j = 2; j * j <= p; j++)
			{ if (p % j == 0) 
				{ while (not(p % j)) 
					{ p /= j;
					Pedy[j]++;
				}
			}
		} if (p > 1) Pedy[p]++;
	}
	for (map<int, int>::iterator it = Pedy.begin(); it != Pedy.end(); it++) 
		{ p = it->second;
		ans = (ans * choose[p + n - 1][n - 1]) % Mod;
	}
	cout << ans << endl ;

	return 0;
}
