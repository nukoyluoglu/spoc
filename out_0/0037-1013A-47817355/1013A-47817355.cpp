#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	int sumx = 0;
	int sumy = 0;
	for (int i = 0; i < n; i++) 
		{ int x;
		cin >> x;
		sumx = sumx + x;
	}
	for (int i = 0; i < n; i++) 
		{ int y;
		cin >> y;
		sumy = sumy + y;
	}
	if (sumy <= sumx) 
		{ cout << "YES" << endl;
	}  else 
		{ cout << "NO" << endl ;

	}
	return 0;
}
