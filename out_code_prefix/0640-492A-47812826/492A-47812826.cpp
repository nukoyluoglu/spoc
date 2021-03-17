#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	int h = 1;
	int temp = ((h) * (h + 1) * (h + 2)) / 6;
	while (temp <= n) 
		{ h++;
		temp = ((h) * (h + 1) * (h + 2)) / 6;
	}
	cout << h - 1 << endl ;

	return 0;
}
