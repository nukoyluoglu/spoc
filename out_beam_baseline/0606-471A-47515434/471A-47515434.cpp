#include <bits/stdc++.h>

using namespace std;

int a[10];
int main() 
	{ int x;
	for (int i = 1; i <= 6; i++) 
		{ cin >> x;
		a[x]++;
	}
	int y = -1, z = -1;
	for (int i = 1; i <= 9; i++) 
		{ if (a[i] >= 4) { z = i; }
	}
	if (z != -1) 
		{ a[z] = a[z] - 4;
		for (int i = 1; i <= 9; i++) 
			{ if (a[i] == 1 && y == -1) { y = i; }
			if (a[i] == 1 && y != -1) { z = i; }
			if (a[i] == 2) { y = z = a[i]; }
		}
		if (y == z)
			{ cout << "Elephant" << endl;
		} else
			{ cout << "Bear" << endl;
	} }  else
		{ cout << "Alien" << endl ;
} }
