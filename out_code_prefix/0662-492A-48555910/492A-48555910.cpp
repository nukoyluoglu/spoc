#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	int sum = 0, height = 0;
	while (sum <= n) 
		{ height++;
		sum += height * (height + 1) / 2;
	}
	cout << height - 1 << endl ;

	return 0;
}
