#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	char a[60];
	cin >> a;
	int j = 1;
	for (int i = 0; i < n; i = i + j) 
		{ cout << a[i];
		j++;
	}
	cout << endl ;
	return 0;
}
