#include <bits/stdc++.h>

using namespace std;

map<long long, long long> mp;
vector<string> s;
vector<int> v;
int main() 
	{ int m;
	cin >> m;
	int k = m, i = 1, j = 1;
	m--;
	while (m--) 
		{ j += i;
		int ans = j % k;
		if (ans == 0) ans = j;
		cout << ans;
		if (m == 0)
			{ cout << endl;
		} else
			{ cout << " ";
		} i++;
		j %= k;
		if ( j == 0 ) j = ans ;
	}
	return 0;
}
