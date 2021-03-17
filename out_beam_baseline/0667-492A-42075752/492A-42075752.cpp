#include <bits/stdc++.h>

using namespace std;

int n, i;
int main() 
	{ cin >> n;
	for (i = 1; i <= 40; i++)
		{ if (i * (i + 1) * (i + 2) / 6 > n) break;
	} cout << i - 1 << endl ;
}
