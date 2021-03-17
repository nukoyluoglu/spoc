#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, ara[100000];
	cin >> n;
	for (int i = 0; i < n; i++) { cin >> ara[i]; }
	for (int i = 0; i < n - 1; i++) { cout << ara[i] + ara[i + 1] << ' '; }
	cout << ara [ n - 1 ] << endl ;
}
