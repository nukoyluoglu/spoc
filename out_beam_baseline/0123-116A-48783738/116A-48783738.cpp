#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	int max = 0;
	int cp = 0;
	for (int i = 0; i < n; i++) 
		{ int a, b;
		cin >> a >> b;
		cp += (b - a);
		if (cp >= max) max = cp;
	}
	cout << max << endl ;
}
