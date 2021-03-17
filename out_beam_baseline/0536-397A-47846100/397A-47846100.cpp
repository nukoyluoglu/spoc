#include <bits/stdc++.h>

using namespace std;

const int N = 105;
bool mm[N];
int main() 
	{ int n;
	cin >> n;
	int k1, k2;
	cin >> k1 >> k2;
	memset(mm, false, sizeof(mm));
	for (int i = int(k1); i < int(k2); ++i) mm[i] = true;
	for (int i = int(0); i < int(n - 1); ++i) 
		{ cin >> k1 >> k2;
		for (int j = int(k1); j < int(k2); ++j) mm[j] = false;
	}
	int ans = 0;
	for (int i = int(0); i < int(101); ++i)
		{ if (mm[i]) ans++;
	} cout << ans << endl ;
	return 0;
}
