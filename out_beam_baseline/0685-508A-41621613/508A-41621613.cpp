#include <bits/stdc++.h>

using namespace std;

int mp[1010][1010];
int main() 
	{ int m, n, k;
	cin >> m >> n >> k;
	memset(mp, 0, sizeof(mp));
	int flog = 0;
	int ans = 0;
	for (int i = 1; i <= k; i++) 
		{ int x, y;
		cin >> x >> y;
		mp[x][y] = 1;
		if (flog == 0) 
			{ if (mp[x - 1][y] && mp[x - 1][y - 1] && mp[x][y - 1]) flog = 1;
			if (mp[x + 1][y] && mp[x + 1][y + 1] && mp[x][y + 1]) flog = 1;
			if (mp[x - 1][y] && mp[x - 1][y + 1] && mp[x][y + 1]) flog = 1;
			if (mp[x + 1][y] && mp[x + 1][y - 1] && mp[x][y - 1]) flog = 1;
			if (flog) 
				{ cout << i << endl;
				return 0;
			}
		}
	}
	cout << "0" << endl ;
}
