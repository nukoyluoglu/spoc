#include <bits/stdc++.h>

using namespace std;

void desperate_optimization(int precision) 
	{ cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(precision);
}
int main() 
	{ desperate_optimization(10);
	int n;
	cin >> n;
	cout << n;
	for (int i = 1; i < n; i++) cout << " " << i;
	cout << endl ;
	return 0;
}
