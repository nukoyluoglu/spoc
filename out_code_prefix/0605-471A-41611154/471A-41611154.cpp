#include <bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f;
int a[11];
int main() 
	{ int n, m, t;
	int i, j, k;
	for (i = 0; i < 6; i++) cin >> t, a[t]++;
	for (i = 1; i <= 9; i++)
		{ if (a[i] >= 4) break;
	} if (i > 9) 
		{ cout << "Alien" << endl;
		return 0;
	}
	for (i = 1; i <= 9; i++)
		{ if (a[i] == 2 || a[i] == 6) break;
	} if (i > 9) 
		{ cout << "Bear" << endl;
		return 0;
	}
	cout << "Elephant" << endl ;

	return 0;
}
