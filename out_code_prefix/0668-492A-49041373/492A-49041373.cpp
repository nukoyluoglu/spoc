#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, tmp = 0, hitung = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) 
		{ hitung += ((i * (i + 1)) / 2);
		if (hitung == n) 
			{ tmp = i;
			break;
		}  else if (hitung > n) 
			{ tmp = i - 1;
			break;
		}
	}
	cout << tmp << endl ;

}
