#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	int i = 2;
	while (n - i * (i + 1) / 2 > 0) 
		{ n -= i * (i + 1) / 2;
		i++;
	}
	cout << i - 1 << endl ;

}
