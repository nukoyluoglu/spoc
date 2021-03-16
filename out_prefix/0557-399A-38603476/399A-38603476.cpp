#include <bits/stdc++.h>

using namespace std;

void desperate_optimization(int precision) 
	{ cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(precision);
}
int main() 
	{ desperate_optimization(10);
	int n, p, k;
	cin >> n >> p >> k;
	if (p - k > 1) cout << "<< ";
	for (int i = max(1, p - k); i < p; i++) { cout << i << " "; }
	cout << "(" << p << ")";
	for (int i = p + 1; i <= min(n, p + k); i++) { cout << " " << i; }
	if (p + k < n) cout << " >>";
	cout <<'\n';

	return 0;
}
