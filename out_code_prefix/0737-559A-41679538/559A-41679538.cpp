#include <bits/stdc++.h>

using namespace std;

int a[10], b[5005];
int main() 
	{ b[0] = 0;
	b[1] = 1;
	for (int i = 2; i < 5005; i++) { b[i] = i * i; }
	int len = 0;
	for (int i = 1; i <= 6; i++) { cin >> a[i]; }
	int m = a[1] + a[2] + a[3];
	len = b[m] - (b[a[1]] + b[a[3]] + b[a[5]]);
	cout << len << endl ;

	return 0;
}
