#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, x;
	cin >> n;
	int cnt1 = 0, cnt2 = 0;
	for (int i = 0; i < n; i++) 
		{ cin >> x;
		cnt1 += x;
	}
	for (int i = 0; i < n; i++) 
		{ cin >> x;
		cnt2 += x;
	}
	if (cnt1 >= cnt2)
		{ cout << "YES" << endl;
	} else
		{ cout << "NO" << endl ;

} }
