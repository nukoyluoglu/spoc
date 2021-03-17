#include <bits/stdc++.h>

using namespace std;

int n, a[100001], mink = 2e9, pr = -1, mind = 2e9;
int main() 
	{ cin >> n;
	for (int i = 0; i < n; i++) 
		{ cin >> a[i];
		mink = min(mink, a[i]);
	}
	for (int i = 0; i < n; i++) 
		{ if (pr != -1 && a[i] == mink) { mind = min(mind, i - pr); }
		if (a[i] == mink) { pr = i; }
	}
	cout << mind << endl ;

}
