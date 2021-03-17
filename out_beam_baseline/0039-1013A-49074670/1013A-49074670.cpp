#include <bits/stdc++.h>

using namespace std;

int x[51], y[51];
int main() 
	{ int n, sum_x = 0, sum_y = 0;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> x[i], sum_x += x[i];
	for (int i = 0; i < n; i++) cin >> y[i], sum_y += y[i];
	if (sum_x >= sum_y)
		{ cout << "YES" << endl;
	} else
		{ cout << "NO" << endl ;
} }
