#include <bits/stdc++.h>

using namespace std;

char dp[10][10];
map<long long, long long> mp;
int main() 
	{ long long n, x;
	long long a[10];
	for (int i = 0; i < 6; i++) 
		{ cin >> a[i];
		mp[a[i]]++;
	}
	bool ok = false;
	for (int i = 0; i < 6; i++) 
		{ if (mp[a[i]] == 6) ok = true;
	}
	if (ok) 
		{ cout << "Elephant" << endl;
		return 0;
	}
	for (int i = 0; i < 6; i++) 
		{ if (mp[a[i]] == 5) ok = true;
	}
	if (ok) 
		{ cout << "Bear" << endl;
		return 0;
	}
	for (int i = 0; i < 6; i++) 
		{ if (mp[a[i]] == 4) ok = true;
	}
	if (!ok) 
		{ cout << "Alien" << endl;
		return 0;
	}
	for (int i = 0; i < 6; i++) 
		{ if (mp[a[i]] == 2) ok = false;
	}
	if (ok)
		{ cout << "Bear" << endl;
	} else
		{ cout << "Elephant" << endl ;
	} return 0;
}
