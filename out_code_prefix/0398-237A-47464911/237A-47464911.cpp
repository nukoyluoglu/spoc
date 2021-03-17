#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, temp[24][60] = {0}, maxi = 0, h, m;
	cin >> n;
	while (n--) 
		{ cin >> h >> m;
		temp[h][m]++;
		if (temp[h][m] > maxi) maxi = temp[h][m];
	}
	cout << maxi << endl ;

	return 0;
}
