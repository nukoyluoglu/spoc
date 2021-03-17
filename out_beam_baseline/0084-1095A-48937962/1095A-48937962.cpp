#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	char a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	int incr = 1;
	for (int i = 0; i < n; i = i + incr) 
		{ cout << a[i];
		incr++;
	}
	cout << endl ;
}
