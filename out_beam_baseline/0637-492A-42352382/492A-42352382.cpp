#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int var = 1, n, aux = 0, x = 0;
	cin >> n;
	int level = 0;
	while (1) 
		{ x += var;
		aux += x;
		if (aux > n) break;
		level++;
		var++;
	}
	cout << level << endl ;
}
