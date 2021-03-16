#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int ee = 0, acc = 0;
	for (int i = 0; i < 6; i++) 
		{ int e;
		cin >> e;
		if (i % 2 == 0) acc += e * e;
		if (i < 3) ee += e;
	}
	int ans = ee * ee - acc;
	cout << ans << endl ;

}
