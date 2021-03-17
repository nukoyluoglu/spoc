#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int i, j, n, p = 0, q, flag = 0, a[10] = {0};
	for (i = 0; i < 6; i++) 
		{ cin >> n;
		a[n]++;
	}
	for (i = 0; i <= 9; i++) 
		{ if (a[i] >= 4) 
			{ a[i] -= 4;
			flag = 1;
		}
	}
	if (flag == 0) 
		{ cout << "Alien" << endl;
		return 0;
	}
	for (i = 0; i <= 9; i++) 
		{ if (a[i] == 2) 
			{ cout << "Elephant" << endl;
			return 0;
		}
	}
	cout << "Bear" << endl ;
	return 0;
}
