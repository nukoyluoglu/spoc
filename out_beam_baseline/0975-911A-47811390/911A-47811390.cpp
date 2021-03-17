#include <bits/stdc++.h>

using namespace std;

int n, mn = 1e9 + 7, skr = 1e9 + 7, mnd = 1e6;
void masuk(int idx) 
	{ if (idx < n) 
		{ int ai;
		cin >> ai;
		mn = min(mn, ai);
		masuk(idx + 1);
		if (ai == mn) 
			{ mnd = min(mnd, skr - idx);
			skr = idx;
		}
	}
}
int main() 
	{ cin >> n;
	masuk(0);
	cout << mnd << endl ;
	return 0;
}
