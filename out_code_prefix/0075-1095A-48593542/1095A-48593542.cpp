#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	string a;
	cin >> a;
	for (int i = 1; i * (i + 1) / 2 < n + 1; i++) { cout << a[(i * (i + 1) / 2) - 1]; }
	cout << endl ;

	return 0;
}
